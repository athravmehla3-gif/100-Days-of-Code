#include <stdio.h>

int main() {
    int nums[] = {0, 4, 3, 1, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    // The total elements from 0 to n is (n + 1), but array size is n.
    // Expected sum of numbers from 0 to n: (n * (n + 1)) / 2
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    
    // Calculate the actual sum of elements in the array
    for(int i = 0; i < n; i++) {
        actualSum += nums[i];
    }
    
    // The missing number is the difference between expected and actual sum
    int missingNumber = expectedSum - actualSum;
    
    printf("%d\n", missingNumber);
    
    return 0;
}