## Problem: Longest Common Prefix (Easy-Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/description/

### Approach
I compared characters of all strings one by one starting from the first character.  
I used the first string as a reference and checked each character against the same position in all other strings.  
If a mismatch was found, I stopped and returned the prefix collected so far.  
This ensures we only keep the longest prefix common to all strings.

### Complexity
- Time: O(n * m)  (n = number of strings, m = length of the shortest string)  
- Space: O(1)

### Notes
Initially thought of sorting the strings and comparing only the first and last, which also works.  
The direct comparison approach is simpler and easy to implement.  
Learned that handling edge cases like empty strings or single string input is important.

## Test Cases

### Typical Case
Input: strs = ["flower","flow","flight"]  
Output: "fl"  
Explanation: The longest common prefix among all strings is "fl".

### Edge Case
Input: strs = ["dog","racecar","car"]  
Output: ""  
Explanation: No common prefix exists.

### Edge Case
Input: strs = ["interspecies","interstellar","interstate"]  
Output: "inters"  
Explanation: All strings share "inters" as the prefix.

### Edge Case
Input: strs = ["throne","throne"]  
Output: "throne"  
Explanation: Both strings are identical, so the whole string is the prefix.

### Edge Case
Input: strs = ["","b"]  
Output: ""  
Explanation: One string is empty, so no common prefix.

