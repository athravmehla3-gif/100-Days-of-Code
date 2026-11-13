#include <stdio.h>
#include <string.h>

// Define the Gender enum
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define the Person struct containing the Gender enum
struct Person {
    enum Gender gender;
};

// Function to print the gender as a readable string
void printGender(struct Person p) {
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }
}

int main() {
    char input[20];
    struct Person person;

    // Read input (e.g., "Gender=MALE" or "MALE")
    if (scanf("%19s", input) == 1) {
        // Check if input starts with "Gender=" and extract the value
        char *value = strchr(input, '=');
        if (value != NULL) {
            value++; // Move past the '=' character
        } else {
            value = input;
        }

        // Map string input to the corresponding enum value
        if (strcmp(value, "MALE") == 0) {
            person.gender = MALE;
        } else if (strcmp(value, "FEMALE") == 0) {
            person.gender = FEMALE;
        } else {
            person.gender = OTHER;
        }

        // Print the person's gender
        printGender(person);
    }

    return 0;
}
