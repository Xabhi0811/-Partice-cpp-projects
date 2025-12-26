#include <bits/stdc++.h>
using namespace std;

int lcsOptimized(string a, string b) {
    int n=a.size(), m=b.size();
    vector<int> prev(m+1,0), cur(m+1,0);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1])
                cur[j]=1+prev[j-1];
            else
                cur[j]=max(prev[j], cur[j-1]);
        }
        prev=cur;
    }
    return prev[m];
}

int main(){
    cout << lcsOptimized("ABCBDAB","BDCAB") << endl;
}
