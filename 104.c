#include <stdio.h>
int main() {
    int n, x;
    long long total, sum;

    scanf("%d", &n);

    total = (long long)n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        sum = (long long)x * (x + 1) / 2;

        if (sum == total - sum + x) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
