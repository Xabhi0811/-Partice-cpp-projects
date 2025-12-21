#include <bits/stdc++.h>
using namespace std;

int largestHistogram(vector<int>& h) {
    stack<int> st;
    int maxArea = 0;

    for(int i = 0; i <= h.size(); i++) {
        int curr = (i == h.size()) ? 0 : h[i];
        while(!st.empty() && curr < h[st.top()]) {
            int height = h[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}

int main() {
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    int n = matrix.size(), m = matrix[0].size();
    vector<int> height(m, 0);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            height[j] = (matrix[i][j] == '1') ? height[j] + 1 : 0;
        }
        ans = max(ans, largestHistogram(height));
    }

    cout << ans;
}
