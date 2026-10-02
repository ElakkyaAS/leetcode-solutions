## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/description/

### Approach
I compared the frequency of each character in both strings.  
By using a hash map (or an array since inputs are lowercase English letters), I counted occurrences of each character in the first string and subtracted counts while scanning the second string.  
If all counts return to zero, the strings are anagrams.

### Complexity
- Time: O(n)  
- Space: O(1) (using fixed-size array of 26 for lowercase letters)

### Notes
Initially thought of sorting both strings and comparing, but that takes O(n log n).  
The counting approach is more efficient and avoids unnecessary sorting.  
Learned that handling edge cases like different lengths upfront makes the solution cleaner.

## Test Cases

### Typical Case
Input: s = "anagram", t = "nagaram"  
Output: true

### Edge Case
Input: s = "rat", t = "car"  
Output: false

### Edge Case
Input: s = "a", t = "a"  
Output: true

### Edge Case
Input: s = "listen", t = "silent"  
Output: true

### Edge Case
Input: s = "hello", t = "billion"  
Output: false

