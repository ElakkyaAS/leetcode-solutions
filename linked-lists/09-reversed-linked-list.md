## Problem: Reverse a Linked List (Easy-Medium)
**Link:** https://leetcode.com/problems/reverse-linked-list/description/

### Approach
I implemented both iterative and recursive methods to reverse a singly linked list.  
In the iterative method, I used three pointers (`prev`, `curr`, `next`) to reverse links one by one until the list was fully reversed.  
In the recursive method, I reversed the rest of the list first and then adjusted the current node’s pointer, which naturally unwinds into the reversed list.

### Complexity
- Time: O(n)  
- Space: O(1) for iterative, O(n) for recursive (due to call stack)

### Notes
Initially found the recursive approach tricky because of pointer manipulation, but it became clearer after visualizing the call stack.  
The iterative approach is more memory-efficient, while the recursive one is elegant and concise.  
Learned that careful handling of `NULL` pointers is crucial to avoid segmentation faults.

## Test Cases

### Typical Case
Input: [1,2,3,4,5]  
Output: [5,4,3,2,1]  
Explanation: The list is reversed completely.

### Edge Case
Input: [1,2]  
Output: [2,1]  
Explanation: Two nodes swapped.

### Edge Case
Input: [10]  
Output: [10]  
Explanation: Single node list remains the same.

### Edge Case
Input: []  
Output: []  
Explanation: Empty list, nothing to reverse.

### Edge Case
Input: [1,1,1,1]  
Output: [1,1,1,1]  
Explanation: All values are identical, order reversal doesn’t change appearance.

