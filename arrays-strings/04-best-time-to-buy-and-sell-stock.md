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
