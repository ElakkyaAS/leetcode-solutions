## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/description/

### Approach
I used a hash map to store numbers and their indices while iterating through the array.  
For each element, I checked if the complement (target - current number) was already in the map.  
This avoids nested loops and gives an efficient solution.

### Complexity
- Time: O(n)  
- Space: O(n)

### Notes
Initially tried a brute force O(n^2) approach, but optimized using a hash map.  
Learned that handling duplicate values carefully is important.

## Test Cases

### Typical Case
Input: nums = [2,7,11,15], target = 9  
Output: [0,1]

### Edge Case
Input: nums = [3,3], target = 6  
Output: [0,1]

### Edge Case
Input: nums = [], target = 5  
Output: No solution

