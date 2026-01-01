int dp[1001][1001];

int lcsMemo(string &a, string &b, int i, int j){
    if(i==0 || j==0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    if(a[i-1]==b[j-1])
        return dp[i][j]=1+lcsMemo(a,b,i-1,j-1);

    return dp[i][j]=max(
        lcsMemo(a,b,i-1,j),
        lcsMemo(a,b,i,j-1)
    );
}
