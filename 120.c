#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    // Take string input (handling spaces)
    printf("Enter the string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        // Remove trailing newline character added by fgets
        str[strcspn(str, "\n")] = '\0';

        // Loop through the string to capitalize the first letter of each word
        for (int i = 0; str[i] != '\0'; i++) {
            // Capitalize if it's the first character or if it follows a space
            if (i == 0 || str[i - 1] == ' ') {
                str[i] = toupper((unsigned char)str[i]);
            }
        }

        // Print the final result
        printf("%s\n", str);
    }

    return 0;
}
