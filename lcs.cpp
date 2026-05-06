class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int>ans;
      int max = INT_MIN;

      for(int i = nums.size()-1;i>=0;i--){
        if(nums[i]>max){
         ans.push_back(nums[i]);
           max = nums[i];
           }
      }
      reverse(ans.begin(), ans.end());

     return ans ;
    }
};