## Problem: Best Time to Buy and Sell Stock (Easy-Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

### Approach
I tracked the minimum price seen so far while iterating through the array.  
At each step, I calculated the profit if selling today (current price - minimum price).  
I updated the maximum profit whenever a better profit was found.  
This ensures we buy before we sell and achieve the maximum possible profit.

### Complexity
- Time: O(n)  
- Space: O(1)

### Notes
Initially tried comparing every pair of days (brute force O(n^2)), but that was too slow.  
The optimized approach works in a single pass and is much more efficient.  
Learned that keeping track of the minimum value so far is the key insight.

## Test Cases

### Typical Case
Input: prices = [7,1,5,3,6,4]  
Output: 5  
Explanation: Buy at price 1 (day 2), sell at price 6 (day 5), profit = 6 − 1 = 5.

### Edge Case
Input: prices = [7,6,4,3,1]  
Output: 0  
Explanation: Prices keep going down, no profit possible.

### Edge Case
Input: prices = [2,4,1]  
Output: 2  
Explanation: Buy at 2 (day 1), sell at 4 (day 2), profit = 2.

### Edge Case
Input: prices = [3,3,5,0,0,3,1,4]  
Output: 4  
Explanation: Buy at 0 (day 4), sell at 4 (day 8), profit = 4.

### Edge Case
Input: prices = [1]  
Output: 0  
Explanation: Only one day, cannot sell later.

