## Problem: Move Zeroes (Easy-Medium)
**Link:** https://leetcode.com/problems/move-zeroes/description/

### Approach
I used a two-pointer technique to rearrange the array in-place.  
One pointer (`writeIndex`) tracks the position to place the next non-zero element, while the other pointer iterates through the array.  
After placing all non-zero elements at the front, I filled the remaining positions with zeroes.  
This ensures the relative order of non-zero elements is maintained.

### Complexity
- Time: O(n)  
- Space: O(1)

### Notes
Initially thought of using a bubble sort-like shifting approach, but that was inefficient.  
The two-pointer method is cleaner and faster.  
Learned that separating the "move non-zeroes" step from the "fill zeroes" step makes the logic easier to understand.

## Test Cases

### Typical Case
Input: [0,1,0,3,12]  
Output: [1,3,12,0,0]  
Explanation: All non-zero elements are moved to the front, zeros shifted to the end.

### Edge Case
Input: [0,0,0]  
Output: [0,0,0]  
Explanation: Only zeros, so the array remains the same.

### Edge Case
Input: [1,2,3]  
Output: [1,2,3]  
Explanation: No zeros present, array remains unchanged.

### Edge Case
Input: [4,0,5,0,0,6]  
Output: [4,5,6,0,0,0]  
Explanation: Non-zero elements keep their relative order, zeros moved to the end.

### Edge Case
Input: []  
Output: []  
Explanation: Empty array, nothing to move.

