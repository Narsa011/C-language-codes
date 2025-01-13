#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structures for inventory and sales records
typedef struct {
    int item_id;
    char item_name[50];
    float price;
    int stock;
} Inventory;

typedef struct {
    int item_id;
    char item_name[50];
    float price;
    int quantity;
    float total_price;
} Sale;

// Function prototypes
void add_item();
void view_inventory();
void update_stock();
void bill_customer();
void view_sales_report();
void delete_item();
void search_item();
void view_inventory_value();
void view_most_sold_items();
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
                add_item();
                break;
            case 2:
                view_inventory();
                break;
            case 3:
                update_stock();
                break;
            case 4:
                bill_customer();
                break;
            case 5:
                view_sales_report();
                break;
            case 6:
                delete_item();
                break;
            case 7:
                search_item();
                break;
            case 8:
                view_inventory_value();
                break;
            case 9:
                view_most_sold_items();
                break;
            case 10:
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
    printf("=============== Clothing Shop Management ===============\n");
    printf("1. Add New Item\n");
    printf("2. View Inventory\n");
    printf("3. Update Stock\n");
    printf("4. Bill Customer\n");
    printf("5. View Sales Report\n");
    printf("6. Delete Item\n");
    printf("7. Search Item\n");
    printf("8. View Total Inventory Value\n");
    printf("9. View Most Sold Items\n");
    printf("10. Exit\n");
    printf("========================================================\n");
}

// Function to clear the screen (platform-dependent)
void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Function to add a new item to the inventory
void add_item() {
    FILE *file;
    Inventory item;

    file = fopen("inventory.txt", "a+");
    if (file == NULL) {
        printf("\nError: Could not open the inventory file.\n");
        return;
    }

    printf("\nEnter Item ID: ");
    scanf("%d", &item.item_id);

    printf("Enter Item Name: ");
    scanf("%s", item.item_name);

    printf("Enter Item Price: ");
    scanf("%f", &item.price);

    printf("Enter Stock Quantity: ");
    scanf("%d", &item.stock);

    fprintf(file, "%d,%s,%.2f,%d\n", item.item_id, item.item_name, item.price, item.stock);
    fclose(file);

    printf("\nItem added successfully!\n");
}

// Function to view inventory
void view_inventory() {
    FILE *file;
    Inventory item;

    file = fopen("inventory.txt", "r");
    if (file == NULL) {
        printf("\nError: Could not access inventory records.\n");
        return;
    }

    printf("\n=============== Inventory ===============\n");
    printf("Item ID\tItem Name\tPrice\tStock\n");
    printf("========================================\n");

    while (fscanf(file, "%d,%49[^,],%f,%d", &item.item_id, item.item_name, &item.price, &item.stock) != EOF) {
        printf("%d\t\t%-15s\t%.2f\t%d\n", item.item_id, item.item_name, item.price, item.stock);
    }

    fclose(file);
}

// Function to update stock of an item
void update_stock() {
    FILE *file, *temp_file;
    Inventory item;
    int item_id, new_stock;
    int found = 0;

    printf("\nEnter Item ID: ");
    scanf("%d", &item_id);

    file = fopen("inventory.txt", "r");
    temp_file = fopen("temp.txt", "w");
    if (file == NULL || temp_file == NULL) {
        printf("\nError: Could not access inventory records.\n");
        return;
    }

    while (fscanf(file, "%d,%49[^,],%f,%d", &item.item_id, item.item_name, &item.price, &item.stock) != EOF) {
        if (item.item_id == item_id) {
            printf("\nEnter New Stock Quantity: ");
            scanf("%d", &new_stock);
            item.stock = new_stock;
            found = 1;
            printf("\nStock updated successfully!\n");
        }
        fprintf(temp_file, "%d,%s,%.2f,%d\n", item.item_id, item.item_name, item.price, item.stock);
    }

    fclose(file);
    fclose(temp_file);

    if (found) {
        remove("inventory.txt");
        rename("temp.txt", "inventory.txt");
    } else {
        printf("\nItem not found.\n");
    }
}

// Function to bill a customer
void bill_customer() {
    FILE *inventory_file, *sales_file, *temp_file;
    Inventory item;
    Sale sale;
    int item_id, quantity;
    int found = 0;

    inventory_file = fopen("inventory.txt", "r");
    sales_file = fopen("sales.txt", "a+");
    temp_file = fopen("temp.txt", "w");
    if (inventory_file == NULL || sales_file == NULL || temp_file == NULL) {
        printf("\nError: Could not access records.\n");
        return;
    }

    printf("\nEnter Item ID: ");
    scanf("%d", &item_id);

    while (fscanf(inventory_file, "%d,%49[^,],%f,%d", &item.item_id, item.item_name, &item.price, &item.stock) != EOF) {
        if (item.item_id == item_id) {
            printf("\nEnter Quantity: ");
            scanf("%d", &quantity);

            if (quantity > item.stock) {
                printf("\nError: Insufficient stock.\n");
            } else {
                sale.item_id = item.item_id;
                strcpy(sale.item_name, item.item_name);
                sale.price = item.price;
                sale.quantity = quantity;
                sale.total_price = item.price * quantity;

                fprintf(sales_file, "%d,%s,%.2f,%d,%.2f\n", sale.item_id, sale.item_name, sale.price, sale.quantity, sale.total_price);
                item.stock -= quantity;
                printf("\nBill generated successfully! Total Amount: %.2f\n", sale.total_price);
                found = 1;
            }
        }
        fprintf(temp_file, "%d,%s,%.2f,%d\n", item.item_id, item.item_name, item.price, item.stock);
    }

    fclose(inventory_file);
    fclose(sales_file);
    fclose(temp_file);

    if (found) {
        remove("inventory.txt");
        rename("temp.txt", "inventory.txt");
    } else {
        printf("\nItem not found.\n");
    }
}

// Function to view sales report
void view_sales_report() {
    FILE *file;
    Sale sale;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("\nError: Could not access sales records.\n");
        return;
    }

    printf("\n=============== Sales Report ===============\n");
    printf("Item ID\tItem Name\tPrice\tQuantity\tTotal\n");
    printf("============================================\n");

    while (fscanf(file, "%d,%49[^,],%f,%d,%f", &sale.item_id, sale.item_name, &sale.price, &sale.quantity, &sale.total_price) != EOF) {
        printf("%d\t\t%-15s\t%.2f\t%d\t\t%.2f\n", sale.item_id, sale.item_name, sale.price, sale.quantity, sale.total_price);
    }

    fclose(file);
}

// Function to delete an item from inventory
void delete_item() {
    FILE *file, *temp_file;
    Inventory item;
    int item_id;
    int found = 0;

    printf("\nEnter Item ID to delete: ");
    scanf("%d", &item_id);

    file = fopen("inventory.txt", "r");
    temp_file = fopen("temp.txt", "w");
    if (file == NULL || temp_file == NULL) {
        printf("\nError: Could not access inventory records.\n");
        return;
    }

    while (fscanf(file, "%d,%49[^,],%f,%d", &item.item_id, item.item_name, &item.price, &item.stock) != EOF) {
        if (item.item_id != item_id) {
            fprintf(temp_file, "%d,%s,%.2f,%d\n", item.item_id, item.item_name, item.price, item.stock);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp_file);

    if (found) {
        remove("inventory.txt");
        rename("temp.txt", "inventory.txt");
        printf("\nItem deleted successfully!\n");
    } else {
        printf("\nItem not found.\n");
    }
}

// Function to search for an item
void search_item() {
    FILE *file;
    Inventory item;
    int item_id;
    int found = 0;

    printf("\nEnter Item ID to search: ");
    scanf("%d", &item_id);

    file = fopen("inventory.txt", "r");
    if (file == NULL) {
        printf("\nError: Could not access inventory records.\n");
        return;
    }

    while (fscanf(file, "%d,%49[^,],%f,%d", &item.item_id, item.item_name, &item.price, &item.stock) != EOF) {
        if (item.item_id == item_id) {
            printf("\nItem Found:\n");
            printf("Item ID: %d\nItem Name: %s\nPrice: %.2f\nStock: %d\n", item.item_id, item.item_name, item.price, item.stock);
            found = 1;
            break;
        }
    }

    fclose(file);

    if (!found) {
        printf("\nItem not found.\n");
    }
}

// Function to calculate and display total inventory value
void view_inventory_value() {
    FILE *file;
    Inventory item;
    float total_value = 0;

    file = fopen("inventory.txt", "r");
    if (file == NULL) {
        printf("\nError: Could not access inventory records.\n");
        return;
    }

    while (fscanf(file, "%d,%49[^,],%f,%d", &item.item_id, item.item_name, &item.price, &item.stock) != EOF) {
        total_value += item.price * item.stock;
    }

    fclose(file);

    printf("\nTotal Inventory Value: %.2f\n", total_value);
}

// Function to view the most sold items
void view_most_sold_items() {
    FILE *file;
    Sale sale;
    int max_quantity = 0;
    char most_sold_item[50];

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("\nError: Could not access sales records.\n");
        return;
    }

    while (fscanf(file, "%d,%49[^,],%f,%d,%f", &sale.item_id, sale.item_name, &sale.price, &sale.quantity, &sale.total_price) != EOF) {
        if (sale.quantity > max_quantity) {
            max_quantity = sale.quantity;
            strcpy(most_sold_item, sale.item_name);
        }
    }

    fclose(file);

    if (max_quantity > 0) {
        printf("\nMost Sold Item: %s (Quantity: %d)\n", most_sold_item, max_quantity);
    } else {
        printf("\nNo sales data available.\n");
    }
}
