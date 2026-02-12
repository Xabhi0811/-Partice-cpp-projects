#include <bits/stdc++.h>
using namespace std;

int unboundedKnapsack(int W, vector<int>& wt, vector<int>& val) {
    vector<int> dp(W+1, 0);

    for(int w = 0; w <= W; w++) {
        for(int i = 0; i < wt.size(); i++) {
            if(wt[i] <= w)
                dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);
        }
    }
    return dp[W];
}

int main() {
    vector<int> wt = {2, 4, 6};
    vector<int> val = {5, 11, 13};
    int W = 10;

    cout << unboundedKnapsack(W, wt, val);
}