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
