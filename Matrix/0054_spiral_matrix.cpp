/**
 * @file 0054_spiral_matrix.cpp
 * @brief 54. Spiral Matrix
 * @details https://leetcode.com/problems/spiral-matrix/
 * 
 * @category Matrix / Simulation
 * @difficulty Medium
 * 
 * @complexity
 * - Time Complexity: O(M * N) - Every element is visited exactly once.
 * - Space Complexity: O(1) auxiliary - Excluding the output result vector.
 */

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};

        int m = matrix.size();
        int n = matrix[0].size();
        int sRow = 0, eRow = m - 1;
        int sCol = 0, eCol = n - 1;
        vector<int> result;

        while (sRow <= eRow && sCol <= eCol) {
            // 1. Traverse Right (Top Boundary)
            for (int j = sCol; j <= eCol; ++j) {
                result.push_back(matrix[sRow][j]);
            }

            // 2. Traverse Down (Right Boundary)
            for (int i = sRow + 1; i <= eRow; ++i) {
                result.push_back(matrix[i][eCol]);
            }

            // 3. Traverse Left (Bottom Boundary)
            for (int j = eCol - 1; j >= sCol; --j) {
                if (sRow == eRow) break; // Avoid duplicating single remaining row
                result.push_back(matrix[eRow][j]);
            }

            // 4. Traverse Up (Left Boundary)
            for (int i = eRow - 1; i >= sRow + 1; --i) {
                if (sCol == eCol) break; // Avoid duplicating single remaining column
                result.push_back(matrix[i][sCol]);
            }

            sRow++;
            eRow--;
            sCol++;
            eCol--;
        }

        return result;
    }
};
