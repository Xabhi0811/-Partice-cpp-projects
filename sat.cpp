#include <bits/stdc++.h>
using namespace std;

void lcsGraph(string a, string b) {
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << "\nDP Table (Graph View):\n\n  ";
    for (char c : b) cout << " " << c;
    cout << "\n";

    for (int i = 0; i <= n; i++) {
        if (i == 0) cout << " ";
        else cout << a[i - 1];

        for (int j = 0; j <= m; j++) {
            cout << " " << dp[i][j];
        }
        cout << "\n";
    }

    cout << "\nLCS Length = " << dp[n][m] << endl;
}

int main() {
    string s1 = "ABCBDAB";
    string s2 = "BDCAB";

    lcsGraph(s1, s2);
    return 0;
}
