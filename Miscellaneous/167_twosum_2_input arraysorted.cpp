class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0, end=numbers.size()-1, currsum ;
        vector<int> ans;

    while(st<end){
      currsum = numbers[st] + numbers[end];

      if(currsum == target ){
        ans.push_back(++st);
        ans.push_back(++end);
        return ans;
      }else if(currsum > target){
        end-- ;
      }
      else{
        st++ ;
      }
    }
    return ans ;

    }
};