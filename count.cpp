#include<iostream>
using namespace std;
int main(){
	int n,count;
	cout<<"enter any num ";
	cin>>n;
      if(n==0)
      {
      	count ++;
	 }
	 if(n<0)
	 {
	 	n=-n;
	 	
	 }
	 while(n!=0)
	 {
	 	n/10;
	 	count++;
	 	
	 }
	 cout<<"total num of digit is "<<count<<endl;
	 return 0;
}
 
