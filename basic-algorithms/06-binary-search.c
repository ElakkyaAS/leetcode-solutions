#include <stdio.h>

// Function to perform binary search
int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;  // target found
        } else if (nums[mid] < target) {
            left = mid + 1;  // search right half
        } else {
            right = mid - 1; // search left half
        }
    }

    return -1; // target not found
}

int main() {
    int n, target;

    // Ask user for input
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    // Call search function
    int result = search(nums, n, target);

    // Print result
    printf("Output: %d\n", result);

    return 0;
}
