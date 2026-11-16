#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Declare an array of 5 Student structures
    struct Student students[5];

    // Input details for 5 students
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); // Reads full name including spaces
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print the details in a tabular format
    printf("\n--------------------------------------------------\n");
    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-20s %-15d %-10.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    printf("--------------------------------------------------\n");

    return 0;
}
