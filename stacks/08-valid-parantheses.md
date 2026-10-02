## Problem: Valid Parentheses (Easy-Medium)
**Link:** https://leetcode.com/problems/valid-parentheses/description/

### Approach
I used a stack to keep track of opening brackets.  
For each character in the string, if it was an opening bracket, I pushed it onto the stack.  
If it was a closing bracket, I checked whether the top of the stack contained the matching opening bracket.  
If not, the string was invalid. At the end, if the stack was empty, the string was valid.

### Complexity
- Time: O(n)  
- Space: O(n) (in worst case, all characters are opening brackets)

### Notes
Initially tried to match brackets using counters, but that failed for nested cases.  
The stack approach handles nesting and order correctly.  
Learned that careful handling of empty stack conditions is important to avoid errors.

## Test Cases

### Typical Case
Input: "()"  
Output: true  
Explanation: Single pair of parentheses is valid.

### Edge Case
Input: "()[]{}"  
Output: true  
Explanation: Multiple types of brackets all matched correctly.

### Edge Case
Input: "(]"  
Output: false  
Explanation: Mismatched brackets, invalid.

### Edge Case
Input: "([)]"  
Output: false  
Explanation: Wrong order of closing brackets.

### Edge Case
Input: "{[]}"  
Output: true  
Explanation: Properly nested brackets are valid.

### Edge Case
Input: ""  
Output: true  
Explanation: Empty string is considered valid.

