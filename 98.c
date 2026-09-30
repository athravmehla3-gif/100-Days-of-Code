#include <stdio.h>
#include <string.h>

int main() {
    char name[100], *token;
    char first, middle;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    token = strtok(name, " ");
    first = token[0];

    token = strtok(NULL, " ");
    middle = token[0];

    token = strtok(NULL, " ");

    printf("%c.%c. %s", first, middle, token);

    return 0;
}
