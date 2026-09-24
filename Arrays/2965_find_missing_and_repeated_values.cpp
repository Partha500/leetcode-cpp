/**
 * @file 2965_find_missing_and_repeated_values.cpp
 * @brief 2965. Find Missing and Repeated Values
 * @details https://leetcode.com/problems/find-missing-and-repeated-values/
 * 
 * @category Arrays / Hash Table / Math
 * @difficulty Easy
 * 
 * @complexity
 * - Approach 1 (Frequency Hash Map / Vector): Time Complexity: O(N^2), Space Complexity: O(N^2)
 * - Approach 2 (Math Sum / Square Difference): Time Complexity: O(N^2), Space Complexity: O(1)
 */

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    /**
     * Frequency Hash Map Approach
     */
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int totalElements = n * n;
        unordered_map<int, int> countMap;
        int repeating = -1, missing = -1;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                countMap[grid[i][j]]++;
            }
        }

        for (int i = 1; i <= totalElements; ++i) {
            if (countMap[i] == 2) {
                repeating = i;
            } else if (countMap[i] == 0) {
                missing = i;
            }
        }

        return {repeating, missing};
    }
};
