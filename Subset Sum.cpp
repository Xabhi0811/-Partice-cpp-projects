#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int n, int sum) {
    bool dp[n+1][sum+1];

    for (int i=0; i<=n; i++) dp[i][0] = true;
    for (int j=1; j<=sum; j++) dp[0][j] = false;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=sum; j++) {
            if (arr[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << (subsetSum(arr, n, sum) ? "YES" : "NO");
}
