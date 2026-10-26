
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<bool> isPresent(n+1, false);

        for(int i=0; i<n; i++){
            if(isPresent[nums[i]]==true){
                ans.push_back(nums[i]);
            }
            isPresent[nums[i]] = true;
        }

        for(int i=1; i<=n; i++){
            if(isPresent[i]==false){
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};