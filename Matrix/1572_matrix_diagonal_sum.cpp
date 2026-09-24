/**
 * @file 1572_matrix_diagonal_sum.cpp
 * @brief 1572. Matrix Diagonal Sum
 * @details https://leetcode.com/problems/matrix-diagonal-sum/
 * 
 * @category Matrix / Arrays
 * @difficulty Easy
 * 
 * @complexity
 * - Time Complexity: O(N) - Single loop over N rows.
 * - Space Complexity: O(1) - Constant extra space used.
 */

#include <vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        for (int i = 0; i < n; ++i) {
            // Primary diagonal: mat[i][i]
            sum += mat[i][i];
            
            // Secondary diagonal: mat[i][n - i - 1]
            // Avoid adding center element twice if n is odd
            if (i != n - i - 1) {
                sum += mat[i][n - i - 1];
            }
        }

        return sum;
    }
};
