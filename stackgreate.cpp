 #include<iostream>
 using namespace std;
 stack<int>s;
 vector<int, int> ans;

 for(int i = s.size()-1; i >=0; i--){
    while(s.size()>0 && s.top<=arr[i]){
        s.pop();
    }

    if(s.empty()) 
     arr[i]= -1;
 }
 else(arr[i] =s.top())

 s.push(arr[i])}
 