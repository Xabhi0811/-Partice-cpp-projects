class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        // traverse characters of first string
        for (int i = 0; i < strs[0].size(); i++) {

            char ch = strs[0][i];
              bool match = true;
            // compare with all strings
            for (int j = 1; j < strs.size(); j++) {

                // mismatch condition
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    match = false; 
                    break;
                }
            }
            if(match==true)
            ans.push_back(ch);
            else
            break;


          
        }

        return ans;
    }
};