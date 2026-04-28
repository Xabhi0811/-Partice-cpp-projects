#include<iostream>
#include<vector>
#include<stack>
int main(){
 vector<int> price ={100,80,60,70,60,75,85}
 stack<int>s;
 for(int i =0; i<s.siz(); i++){
    while(s.size()>0&&price[s.top()] <=price[i]){
        s.pop();
    }
    if(s.emplty()){
        ans[i] =i+1;

    }else{
        ans[i] =i -s.top();
    }
    s.push(i);
 }
 for(int val : ans){
    count<<val<<" ";
 }
 cout<<endl;

 return 0;
}