/**
 * @file 0136_single_number.cpp
 * @brief 136. Single Number
 * @details https://leetcode.com/problems/single-number/
 * 
 * @category Arrays / Bit Manipulation
 * @difficulty Easy
 * 
 * @complexity
 * - Approach 1 (Bitwise XOR): Time Complexity: O(N), Space Complexity: O(1)
 * - Approach 2 (Hash Map):     Time Complexity: O(N), Space Complexity: O(N)
 */

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    /**
     * Optimal Approach: Bitwise XOR
     * Concept: A ^ A = 0 and A ^ 0 = A.
     * XORing all numbers leaves only the element that appears once.
     */
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for (int num : nums) {
            single ^= num;
        }
        return single;
    }

    /**
     * Alternative Approach: Hash Map Frequency Count
     */
    int singleNumberHashMap(vector<int>& nums) {
        unordered_map<int, int> countMap;
        for (int num : nums) {
            countMap[num]++;
        }
        for (const auto& entry : countMap) {
            if (entry.second == 1) {
                return entry.first;
            }
        }
        return -1;
    }
};
