#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for account details
typedef struct
{
  int account_number;
  char name[30];
  float balance;
} Account;

// Function prototypes
void create_account();
void deposit_money();
void withdraw_money();
void check_balance();
void transaction_history();
void delete_account();
void menu();
void clear_screen();

int main()
{
  int choice;

  while (1)
  {
    menu();
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      create_account();
      break;
    case 2:
      deposit_money();
      break;
    case 3:
      withdraw_money();
      break;
    case 4:
      check_balance();
      break;
    case 5:
      transaction_history();
      break;
    case 6:
      delete_account();
      break;
    case 7:
      printf("\nExiting the program...\n");
      exit(0);
      break;
    default:
      printf("\nInvalid choice! Please try again.\n");
    }
  }
  return 0;
}

// Function to display menu options
void menu()
{
  clear_screen();
  printf("=============== Banking System ===============\n");
  printf("1. Create New Account\n");
  printf("2. Deposit Money\n");
  printf("3. Withdraw Money\n");
  printf("4. Check Balance\n");
  printf("5. View Transaction History\n");
  printf("6. Delete Account\n");
  printf("7. Exit\n");
  printf("==============================================\n");
}

// Function to clear the screen (platform-dependent)
void clear_screen()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

// Function to create a new account
void create_account()
{
  FILE *file;
  Account account;

  file = fopen("accounts.txt", "a+");
  if (file == NULL)
  {
    printf("\nError: Could not open the file for writing.\n");
    return;
  }

  printf("\nEnter Account Number: ");
  scanf("%d", &account.account_number);

  printf("Enter Account Holder Name: ");
  scanf("%s", account.name);

  printf("Enter Initial Deposit Amount: ");
  scanf("%f", &account.balance);

  fprintf(file, "%d,%s,%.2f\n", account.account_number, account.name, account.balance);
  fclose(file);

  printf("\nAccount successfully created!\n");
  getchar(); // Pause before returning to menu
  getchar();
}

// Function to deposit money into an account
void deposit_money()
{
  FILE *file, *temp_file;
  Account account;
  int acc_number;
  float deposit;
  int found = 0;

  printf("\nEnter Account Number: ");
  scanf("%d", &acc_number);

  file = fopen("accounts.txt", "r");
  temp_file = fopen("temp.txt", "w");
  if (file == NULL || temp_file == NULL)
  {
    printf("\nError: Could not access account records.\n");
    return;
  }

  while (fscanf(file, "%d,%29[^,],%f", &account.account_number, account.name, &account.balance) != EOF)
  {
    if (account.account_number == acc_number)
    {
      printf("\nEnter Deposit Amount: ");
      scanf("%f", &deposit);

      account.balance += deposit;
      found = 1;

      printf("\nDeposit successful! New Balance: %.2f\n", account.balance);
    }
    fprintf(temp_file, "%d,%s,%.2f\n", account.account_number, account.name, account.balance);
  }

  fclose(file);
  fclose(temp_file);

  if (found)
  {
    remove("accounts.txt");
    rename("temp.txt", "accounts.txt");
  }
  else
  {
    printf("\nAccount not found.\n");
  }

  getchar();
  getchar();
}

// Function to withdraw money from an account
void withdraw_money()
{
  FILE *file, *temp_file;
  Account account;
  int acc_number;
  float withdrawal;
  int found = 0;

  printf("\nEnter Account Number: ");
  scanf("%d", &acc_number);

  file = fopen("accounts.txt", "r");
  temp_file = fopen("temp.txt", "w");
  if (file == NULL || temp_file == NULL)
  {
    printf("\nError: Could not access account records.\n");
    return;
  }

  while (fscanf(file, "%d,%29[^,],%f", &account.account_number, account.name, &account.balance) != EOF)
  {
    if (account.account_number == acc_number)
    {
      printf("\nEnter Withdrawal Amount: ");
      scanf("%f", &withdrawal);

      if (withdrawal > account.balance)
      {
        printf("\nError: Insufficient funds.\n");
      }
      else
      {
        account.balance -= withdrawal;
        printf("\nWithdrawal successful! New Balance: %.2f\n", account.balance);
      }
      found = 1;
    }
    fprintf(temp_file, "%d,%s,%.2f\n", account.account_number, account.name, account.balance);
  }

  fclose(file);
  fclose(temp_file);

  if (found)
  {
    remove("accounts.txt");
    rename("temp.txt", "accounts.txt");
  }
  else
  {
    printf("\nAccount not found.\n");
  }

  getchar();
  getchar();
}

// Function to check the balance of an account
void check_balance()
{
  FILE *file;
  Account account;
  int acc_number;
  int found = 0;

  printf("\nEnter Account Number: ");
  scanf("%d", &acc_number);

  file = fopen("accounts.txt", "r");
  if (file == NULL)
  {
    printf("\nError: Could not access account records.\n");
    return;
  }

  while (fscanf(file, "%d,%29[^,],%f", &account.account_number, account.name, &account.balance) != EOF)
  {
    if (account.account_number == acc_number)
    {
      printf("\nAccount Number: %d\nName: %s\nBalance: %.2f\n", account.account_number, account.name, account.balance);
      found = 1;
      break;
    }
  }

  fclose(file);

  if (!found)
  {
    printf("\nAccount not found.\n");
  }

  getchar();
  getchar();
}

// Function to view transaction history
void transaction_history()
{
  FILE *file;
  Account account;

  file = fopen("accounts.txt", "r");
  if (file == NULL)
  {
    printf("\nError: Could not access transaction records.\n");
    return;
  }

  printf("\n=============== Transaction History ===============\n");
  printf("Account No.\tName\t\tBalance\n");
  printf("===================================================\n");

  while (fscanf(file, "%d,%29[^,],%f", &account.account_number, account.name, &account.balance) != EOF)
  {
    printf("%d\t\t%-15s\t%.2f\n", account.account_number, account.name, account.balance);
  }

  fclose(file);
  getchar();
  getchar();
}

// Function to delete an account
void delete_account()
{
  FILE *file, *temp_file;
  Account account;
  int acc_number;
  int found = 0;

  printf("\nEnter Account Number to Delete: ");
  scanf("%d", &acc_number);

  file = fopen("accounts.txt", "r");
  temp_file = fopen("temp.txt", "w");
  if (file == NULL || temp_file == NULL)
  {
    printf("\nError: Could not access account records.\n");
    return;
  }

  while (fscanf(file, "%d,%29[^,],%f", &account.account_number, account.name, &account.balance) != EOF)
  {
    if (account.account_number == acc_number)
    {
      found = 1;
      printf("\nAccount Number %d deleted successfully.\n", acc_number);
    }
    else
    {
      fprintf(temp_file, "%d,%s,%.2f\n", account.account_number, account.name, account.balance);
    }
  }

  fclose(file);
  fclose(temp_file);

  if (found)
  {
    remove("accounts.txt");
    rename("temp.txt", "accounts.txt");
  }
  else
  {
    printf("\nAccount not found.\n");
  }

  getchar();
  getchar();
}
