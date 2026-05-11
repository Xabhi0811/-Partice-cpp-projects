class Solution {
public:
    vector<vector<int>> generate(int numsRows) {
        vector<vector<int>> r(numsRows);

        for(int i =0 ; i< numsRows; i++){
            r[i].resize(i+1);
            r[i][0] = r[i][i]=1;
            for(int j =1; j<i;j++){
                r[i][j] = r[i-1][j-1]+r[i-1][j];
            }
        }

        return r ;
        
    }
};