#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    stack<char> st;

    for(char c : num) {
        while(!st.empty() && k > 0 && st.top() > c) {
            st.pop();
            k--;
        }
        st.push(c);
    }

    while(k-- > 0 && !st.empty())
        st.pop();

    string res = "";
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());

    
    int i = 0;
    while(i < res.size() && res[i] == '0') i++;
    res = res.substr(i);

    return res.empty() ? "0" : res;
}

int main() {
    string num = "1432219";
    int k = 3;
    cout << removeKdigits(num, k);
    return 0;
}
