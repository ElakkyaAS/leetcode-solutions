## Problem: Binary Search 
**Link:** https://leetcode.com/problems/binary-search/description/

### Approach
I used the classic binary search algorithm on a sorted array.  
By maintaining two pointers (left and right), I repeatedly calculated the middle index and compared the target with the middle element.  
If the target was smaller, I moved the right pointer left; if larger, I moved the left pointer right.  
This halves the search space each time until the target is found or the pointers cross.

### Complexity
- Time: O(log n)  
- Space: O(1)

### Notes
Initially tried a linear search, but that was O(n) and inefficient.  
Binary search is much faster for sorted arrays.  
Learned that careful handling of mid calculation and loop conditions prevents infinite loops.

## Test Cases

### Typical Case
Input: nums = [-1,0,3,5,9,12], target = 9  
Output: 4  
Explanation: Target 9 is found at index 4.

### Edge Case
Input: nums = [-1,0,3,5,9,12], target = 2  
Output: -1  
Explanation: Target 2 is not in the array.

### Edge Case
Input: nums = [1], target = 1  
Output: 0  
Explanation: Single element array, target found at index 0.

### Edge Case
Input: nums = [1,2,3,4,5,6,7,8,9], target = 1  
Output: 0  
Explanation: Target is the first element.

### Edge Case
Input: nums = [1,2,3,4,5,6,7,8,9], target = 9  
Output: 8  
Explanation: Target is the last element.

