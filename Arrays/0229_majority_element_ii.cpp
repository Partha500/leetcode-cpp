/**
 * @file 0229_majority_element_ii.cpp
 * @brief 229. Majority Element II
 * @details https://leetcode.com/problems/majority-element-ii/
 * 
 * @category Arrays / Counting / Extended Boyer-Moore Voting
 * @difficulty Medium
 * 
 * @complexity
 * - Approach 1 (Extended Boyer-Moore): Time Complexity: O(N), Space Complexity: O(1)
 * - Approach 2 (Hash Map):              Time Complexity: O(N), Space Complexity: O(N)
 */

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    /**
     * Optimal Approach: Extended Boyer-Moore Voting Algorithm
     * There can be at most 2 elements that appear more than n/3 times.
     */
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            } else if (num == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        // Verification pass
        count1 = 0;
        count2 = 0;
        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        vector<int> result;
        int n = nums.size();
        if (count1 > n / 3) result.push_back(candidate1);
        if (count2 > n / 3) result.push_back(candidate2);

        return result;
    }

    /**
     * Alternative Approach: Hash Map Frequency Counting
     */
    vector<int> majorityElementHashMap(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int n = nums.size();
        vector<int> result;

        for (int num : nums) {
            countMap[num]++;
        }

        for (const auto& entry : countMap) {
            if (entry.second > n / 3) {
                result.push_back(entry.first);
            }
        }

        return result;
    }
};
