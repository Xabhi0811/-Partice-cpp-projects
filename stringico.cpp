class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> m1;
        unordered_map<char, char> m2;

        for (int i = 0; i < s.length(); i++) {

            char a = s[i];
            char b = t[i];

            // check s -> t mapping
            if (m1.count(a)) {
                if (m1[a] != b)
                    return false;
            }

            // check t -> s mapping
            else if (m2.count(b)) {
                if (m2[b] != a)
                    return false;
            }

            // store mapping
            m1[a] = b;
            m2[b] = a;
        }

        return true;
    }
};