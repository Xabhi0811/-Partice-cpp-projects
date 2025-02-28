#include<iostream>
using namespace std;
int main(){
	int n,i,ans;
	cout<<"enter any num";
	cin>>n;
	for(i=1;i<=10;i++)
	{
	  ans=i*n;
	 cout<<n<<" * "<<i<<" = "<<ans<<endl;}
	 return 0;
	
}

/*#include<iostream>
using namespace std;
int main(){
	int s=1,i,e,ans;
	cout<<"enter  any starting value of num";
	cin>>s;
	cout<<"enter the end value of num ";
	cin>>e;
	for(i=s;i<=e;i++)
	{
	     ans=i+e;
		cout<<"sum of all natural num"<<ans;	
	}
	return 0;
}*/


#include<iostream>
using namespace std;
int main(){
	int s,e,t;
	cout<<"enter any starting no and end digit no";
	cin>>s>>e;
	for(s=1;s<=e;s++)
	{
		t=s+e;
		cout<<"the sum of all natural no is "<<t<<endl;
	} 
	return 0;
}
























