#include <stdio.h>

int main() {
    char first, last;
    scanf("%c", &first);
    
    while (getchar() != ' ');
    scanf("%c", &last);

    printf("%c.%c.", first, last);

    return 0;
}
