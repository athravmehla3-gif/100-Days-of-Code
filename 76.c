#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    int symmetric = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (n != m) {
        symmetric = 0;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != a[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
            if (!symmetric)
                break;
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
