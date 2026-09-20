#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Diagonal traversal
    for (int d = 0; d < r + c - 1; d++) {
        int start = (d < c) ? 0 : d - c + 1;
        int end = (d < r) ? d : r - 1;

        for (int i = start; i <= end; i++) {
            int j = d - i;
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}
