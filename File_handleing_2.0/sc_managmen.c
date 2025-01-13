#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    int rollNo;
    char name[50];
    char grade[5];
} Student;

void addStudent();
void displayStudents();
void deleteStudent();
void updateStudent();

int main() {
    int choice;
    do {
        printf("\n==== School Management System ====\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Delete Student\n");
        printf("4. Update Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                deleteStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                printf("\nExiting... Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void addStudent() {
    FILE *file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("\nError opening file!\n");
        return;
    }

    Student s;
    printf("\nEnter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    getchar(); // Clear input buffer
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove newline character
    printf("Enter Grade: ");
    scanf("%s", s.grade);

    fprintf(file, "%d %s %s\n", s.rollNo, s.name, s.grade);
    fclose(file);

    printf("\nStudent added successfully!\n");
}

void displayStudents() {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("\nNo student records found!\n");
        return;
    }

    Student s;
    printf("\n==== Student Records ====\n");
    while (fscanf(file, "%d %49s %4s", &s.rollNo, s.name, s.grade) != EOF) {
        printf("Roll No: %d, Name: %s, Grade: %s\n", s.rollNo, s.name, s.grade);
    }
    fclose(file);
}

void deleteStudent() {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("\nNo student records found to delete!\n");
        return;
    }

    int rollNo;
    printf("\nEnter Roll Number of student to delete: ");
    scanf("%d", &rollNo);

    FILE *tempFile = fopen("temp.txt", "w");
    Student s;
    int found = 0;

    while (fscanf(file, "%d %49s %4s", &s.rollNo, s.name, s.grade) != EOF) {
        if (s.rollNo != rollNo) {
            fprintf(tempFile, "%d %s %s\n", s.rollNo, s.name, s.grade);
        } else {
            found = 1;
        }
    }
    fclose(file);
    fclose(tempFile);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found) {
        printf("\nStudent record deleted successfully!\n");
    } else {
        printf("\nStudent with Roll No %d not found!\n", rollNo);
    }
}

void updateStudent() {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("\nNo student records found to update!\n");
        return;
    }

    int rollNo;
    printf("\nEnter Roll Number of student to update: ");
    scanf("%d", &rollNo);

    FILE *tempFile = fopen("temp.txt", "w");
    Student s;
    int found = 0;

    while (fscanf(file, "%d %49s %4s", &s.rollNo, s.name, s.grade) != EOF) {
        if (s.rollNo == rollNo) {
            printf("\nEnter new details for Roll No %d:\n", rollNo);
            printf("Enter Name: ");
            getchar(); // Clear input buffer
            fgets(s.name, sizeof(s.name), stdin);
            s.name[strcspn(s.name, "\n")] = '\0'; // Remove newline character
            printf("Enter Grade: ");
            scanf("%s", s.grade);
            found = 1;
        }
        fprintf(tempFile, "%d %s %s\n", s.rollNo, s.name, s.grade);
    }
    fclose(file);
    fclose(tempFile);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found) {
        printf("\nStudent record updated successfully!\n");
    } else {
        printf("\nStudent with Roll No %d not found!\n", rollNo);
    }
}
