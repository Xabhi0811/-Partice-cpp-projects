class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, n = nums.size();

        for(int i = 0; i < n; i++){
            sum += nums[i];
        }

        int expected = n * (n + 1) / 2;

        return expected - sum;   
    }
};