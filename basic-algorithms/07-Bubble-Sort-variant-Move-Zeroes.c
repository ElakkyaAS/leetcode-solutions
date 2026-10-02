#include <stdio.h>


void moveZeroes(int* nums, int numsSize) {
    int writeIndex = 0;

    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[writeIndex++] = nums[i];
        }
    }

    // Step 2: Fill the rest with zeros
    while (writeIndex < numsSize) {
        nums[writeIndex++] = 0;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    return 0;
}
