/**
 * @file 0169_majority_element.cpp
 * @brief 169. Majority Element
 * @details https://leetcode.com/problems/majority-element/
 * 
 * @category Arrays / Counting / Boyer-Moore Voting Algorithm
 * @difficulty Easy
 * 
 * @complexity
 * - Approach 1 (Boyer-Moore Voting): Time Complexity: O(N), Space Complexity: O(1)
 * - Approach 2 (Hash Map):           Time Complexity: O(N), Space Complexity: O(N)
 */

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    /**
     * Optimal Approach: Boyer-Moore Majority Vote Algorithm
     * Intuition: Cancels out non-majority elements. Since majority element occurs > n/2 times,
     * it will always survive the cancellation process.
     */
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }

    /**
     * Alternative Approach: Hash Map Frequency Counter
     */
    int majorityElementHashMap(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> countMap;

        for (int num : nums) {
            countMap[num]++;
            if (countMap[num] > n / 2) {
                return num;
            }
        }

        return -1;
    }
};
