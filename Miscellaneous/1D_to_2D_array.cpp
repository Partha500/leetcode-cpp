#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m, vector<int>(n));
        int k =0; 
        if(original.size() != m*n){
            return {};
        }

        for(int i=0; i<=m-1; i++){
            for(int j=0; j<=n-1; j++){
                     ans[i][j]=original[k];
                     k++ ;
            }
        }
        return ans ;

    }
};
