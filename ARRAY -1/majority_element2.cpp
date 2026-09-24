#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>count;
        int n = nums.size();

        vector<int> ans ;
        for(int i =0; i<n; i++){
            count[nums[i]]++ ;
        }

        for(auto x : count ){
            if(x.second > n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
