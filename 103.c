     #include <stdio.h>

    int main() {
        int n, i;
        scanf("%d", &n);

        int nums[n];
        int totalSum = 0, leftSum = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
            totalSum += nums[i];
        }

        for (i = 0; i < n; i++) {
            totalSum -= nums[i];

            if (leftSum == totalSum) {
                printf("%d\n", i);
                return 0;
            }

            leftSum += nums[i];
        }

        printf("-1\n");

        return 0;
    }
