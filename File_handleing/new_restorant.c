#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for customer details
typedef struct {
    int id;
    char name[30];
    char item_name[30];
    int quantity;
    int price;
    int total;
} Customer;

// Function prototypes
void add_order();
void display_orders();
void search_order();
void menu();
void clear_screen();

int main() {
    int choice;

    while (1) {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_order();
                break;
            case 2:
                display_orders();
                break;
            case 3:
                search_order();
                break;
            case 4:
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
void menu() {
    clear_screen();
    printf("=========== Restaurant Management System ===========\n");
    printf("1. Add New Order\n");
    printf("2. Display All Orders\n");
    printf("3. Search Order by ID\n");
    printf("4. Exit\n");
    printf("====================================================\n");
}

// Function to clear screen (platform-dependent)
void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Function to add a new order
void add_order() {
    FILE *file;
    Customer customer;

    file = fopen("restaurant_orders.txt", "a+");
    if (file == NULL) {
        printf("\nError: Could not open the file for writing.\n");
        return;
    }

    printf("\nEnter Customer ID: ");
    scanf("%d", &customer.id);

    printf("Enter Customer Name: ");
    scanf("%s", customer.name);

    printf("Enter Item Name: ");
    scanf("%s", customer.item_name);

    printf("Enter Quantity: ");
    scanf("%d", &customer.quantity);

    printf("Enter Price per Item: ");
    scanf("%d", &customer.price);

    customer.total = customer.quantity * customer.price;

    fprintf(file, "%d,%s,%s,%d,%d,%d\n", customer.id, customer.name, customer.item_name, customer.quantity, customer.price, customer.total);
    fclose(file);

    printf("\nOrder successfully added!\n");
    getchar(); // Pause before returning to menu
}

// Function to display all orders
void display_orders() {
    FILE *file;
    Customer customer;

    file = fopen("restaurant_orders.txt", "r");
    if (file == NULL) {
        printf("\nError: Could not open the file for reading.\n");
        return;
    }

    printf("\n==================== All Orders ====================\n");
    printf("ID\tName\t\tItem\t\tQty\tPrice\tTotal\n");
    printf("====================================================\n");

    while (fscanf(file, "%d,%29[^,],%29[^,],%d,%d,%d", &customer.id, customer.name, customer.item_name, &customer.quantity, &customer.price, &customer.total) != EOF) {
        printf("%d\t%-10s\t%-10s\t%d\t%d\t%d\n", customer.id, customer.name, customer.item_name, customer.quantity, customer.price, customer.total);
    }

    fclose(file);
    getchar(); // Pause before returning to menu
    getchar();
}

// Function to search for an order by ID
void search_order() {
    FILE *file;
    Customer customer;
    int search_id, found = 0;

    printf("\nEnter Customer ID to search: ");
    scanf("%d", &search_id);

    file = fopen("restaurant_orders.txt", "r");
    if (file == NULL) {
        printf("\nError: Could not open the file for reading.\n");
        return;
    }

    while (fscanf(file, "%d,%29[^,],%29[^,],%d,%d,%d", &customer.id, customer.name, customer.item_name, &customer.quantity, &customer.price, &customer.total) != EOF) {
        if (customer.id == search_id) {
            printf("\nOrder found:\n");
            printf("ID: %d\nName: %s\nItem: %s\nQuantity: %d\nPrice: %d\nTotal: %d\n",
                   customer.id, customer.name, customer.item_name, customer.quantity, customer.price, customer.total);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nNo order found with ID: %d\n", search_id);
    }

    fclose(file);
    getchar(); // Pause before returning to menu
    getchar();
}
