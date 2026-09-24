/**
 * @file 0121_best_time_to_buy_and_sell_stock.cpp
 * @brief 121. Best Time to Buy and Sell Stock
 * @details https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * 
 * @category Arrays / Dynamic Programming / Greedy
 * @difficulty Easy
 * 
 * @complexity
 * - Time Complexity: O(N) - Single pass through prices vector.
 * - Space Complexity: O(1) - Constant extra space used.
 */

#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            // Track the minimum buy price seen so far
            minPrice = min(minPrice, price);
            // Calculate potential profit if sold today and update max profit
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
