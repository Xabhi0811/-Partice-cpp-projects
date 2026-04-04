#include <iostream>
#include <vector>
using namespace std;

int LCS(string X, string Y) {
    int m = X.length(), n = Y.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
//fnfjbfn
 
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}



int main() {
    string X = "AGGTAB";
    string Y = "GXTXAYB";
    cout << "Length of LCS: " << LCS(X, Y);
}
