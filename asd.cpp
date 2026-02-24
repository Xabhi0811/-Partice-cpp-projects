#include <bits/stdc++.h>
using namespace std;

int rodCut(int price[], int n) {
    vector<int> dp(n+1, 0);
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++)
            dp[i] = max(dp[i], price[j] + dp[i-j-1]);
    }
    return dp[n];
}

int main() {
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price)/sizeof(price[0]);
    cout << "Maximum Profit = " << rodCut(price, n);
}
