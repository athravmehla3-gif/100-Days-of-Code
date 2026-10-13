#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix = 1;

    // Calculate the product of all elements to the left
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;

    // Multiply by the product of all elements to the right
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
