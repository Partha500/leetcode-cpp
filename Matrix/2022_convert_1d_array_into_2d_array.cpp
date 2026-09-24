/**
 * @file 2022_convert_1d_array_into_2d_array.cpp
 * @brief 2022. Convert 1D Array Into 2D Array
 * @details https://leetcode.com/problems/convert-1d-array-into-2d-array/
 * 
 * @category Matrix / Arrays
 * @difficulty Easy
 * 
 * @complexity
 * - Time Complexity: O(M * N) - Single pass through m * n elements.
 * - Space Complexity: O(1) auxiliary - Excluding the output 2D vector.
 */

#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) {
            return {};
        }

        vector<vector<int>> result(m, vector<int>(n));
        for (int i = 0; i < m * n; ++i) {
            result[i / n][i % n] = original[i];
        }

        return result;
    }
};
