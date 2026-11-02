class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans ;
        
        sort(nums.begin(), nums.end());
          int n= nums.size();
          for(int i=0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1])  continue;
            int l=i+1, r=n-1;
            int target = -nums[i]; 
            while(l<r){
                int sum = nums[l] + nums[r];
                if(sum == target){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    
                    while(l<r && nums[l]==nums[l+1]) l++ ;
                    while(l<r && nums[r] == nums[r-1]) r-- ;

                    l++ ;
                    r-- ;
                }
                else if(sum < target ) l++ ;
                else  r-- ;
            }
          }
          return ans ;
    }
};