class Solution {
public:

    int maxLen(vector<int>& arr) {

        unordered_map<int, int> mp;

        int sum = 0;
        int maxi = 0;

        for(int i = 0; i < arr.size(); i++) {

            sum += arr[i];

            // If sum becomes 0
            if(sum == 0) {
                maxi = i + 1;
            }

            // If sum already exists
            else if(mp.find(sum) != mp.end()) {

                maxi = max(maxi, i - mp[sum]);
            }

            // Store first occurrence
            else {
                mp[sum] = i;
            }
        }

        return maxi;
    }
};