int longestCommonSubstring(string a, string b) {
    int n=a.size(), m=b.size(), ans=0;
    vector<vector<int>> dp(n+1, vector<int>(m+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                ans=max(ans, dp[i][j]);
            }
        }
    }
    return ans;
}
