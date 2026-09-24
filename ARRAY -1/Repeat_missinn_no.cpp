#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>count;
        vector<int> ans;
        int n=grid.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                count[grid[i][j]]++ ;
            }
        }
        for(auto x : count ){
            if(x.second == 2 ){
                ans.push_back(x.first);
            }
        }
        for(int i = 1; i <= n*n; i++){
                if(count.find(i) == count.end()){
                   ans.push_back(i);
                 }
        }
        return ans ;
    }
};
