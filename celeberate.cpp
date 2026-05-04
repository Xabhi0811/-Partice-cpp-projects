#include<iostream>
#include<stack>
#include<vector>

stack<int>s;
for(int i =0; i<n-1;i++){
    i=s.top();
    s.pop();
    j=s.top();
    s.pop();
    if (arr[i][j]==0)
    {
        s.push(i)
    }
    else{
        s.push(j)
    }
    int celeb =s.top();
    
}
for(int i =0; i<n;i++){
  if((i!=celeb)&&(arr[i][celeb]==0||arr[celeb][i]==1))
  return -1;
}

return celeb;