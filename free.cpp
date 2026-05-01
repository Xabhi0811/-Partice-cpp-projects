class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int free =0 ; 
       int ans =0;
       for(int i =0; i<nums.size(); i++){
        if(free == 0 ){
            ans = nums[i];
        }
        if(ans == nums[i])
        free++;

        else{
            free--;
        }
       }
    }
    reuturn ans ;
};
