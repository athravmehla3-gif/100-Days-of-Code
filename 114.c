#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, start = 0, maxLength = 0, length;

    scanf("%999s", s);
    length = strlen(s);

    for (i = 0; i < length; i++) {
        for (j = start; j < i; j++) {
            if (s[i] == s[j]) {
                start = j + 1;
                break;
            }
        }

        if (i - start + 1 > maxLength) {
            maxLength = i - start + 1;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
