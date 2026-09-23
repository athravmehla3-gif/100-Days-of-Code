#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]) && str[i] != '\n')
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
