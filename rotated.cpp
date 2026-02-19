#include<stdio.h>
#include<vector>
int main(){
    vector<int>temp(num.size());
    for(int i = 0; i<num.size(); i ++){
        temp[(n+k)%num.size()] = num[i];
    }
    num = temp;
    return 0;
}
