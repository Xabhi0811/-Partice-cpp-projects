#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int w = 0; w <= W; w++) {
            if(wt[i-1] <= w)
                dp[i][w] = max(
                    val[i-1] + dp[i-1][w - wt[i-1]],
                    dp[i-1][w]
                );
            else
                dp[i][w] = dp[i-1][w];
        }
    }
    return dp[n][W];
}

int main() {
    vector<int> wt = {2, 3, 4, 5};
    vector<int> val = {3, 4, 5, 6};
    int W = 5;

    cout << knapsack(W, wt, val, wt.size());
}