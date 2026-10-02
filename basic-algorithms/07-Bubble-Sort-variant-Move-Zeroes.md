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
