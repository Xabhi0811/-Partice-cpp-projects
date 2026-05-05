class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> ans;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                if(ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]){
                if(ans.empty() || ans.back() != nums2[j])
                    ans.push_back(nums2[j]);
                j++;
            }
            else {
                if(ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        while(i < nums1.size()){
            if(ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
            i++;
        }

        while(j < nums2.size()){
            if(ans.empty() || ans.back() != nums2[j])
                ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};