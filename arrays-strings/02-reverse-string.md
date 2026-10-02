## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/description/

### Approach
I used a two-pointer technique: one pointer starting at the beginning of the array and another at the end.  
By swapping the characters at these positions and moving both pointers inward, the string is reversed in-place without extra memory.

### Complexity
- Time: O(n)  
- Space: O(1)

### Notes
Initially thought about using an extra array, but realized that would violate the in-place requirement.  
Learned that careful pointer movement (left++, right--) ensures correctness and avoids unnecessary loops.
