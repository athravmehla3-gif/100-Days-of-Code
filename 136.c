#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char choiceStr[20];
    int a, b;
    enum Operation op;

    // Read operation name and two numbers
    scanf("%s %d %d", choiceStr, &a, &b);

    // Map input string to enum value
    if (strcmp(choiceStr, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(choiceStr, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(choiceStr, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }

    // Perform calculation using switch
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}