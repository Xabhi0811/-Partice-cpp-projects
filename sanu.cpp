class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        string result;
        
        for(char ch : s) {
            result.push_back(ch);
            
            if(result.size() >= part.size()) {
                if(result.substr(result.size() - part.size()) == part) {
                    result.erase(result.size() - part.size());
                }
            }
        }
        
        return result;
    }
};