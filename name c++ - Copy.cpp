#include<iostream>
using namespace std;
int main(){
	int mno;
	char name[20];
	float cr,pr,uc;
	cout<<"enter your coustum no";
	cin>>mno;
	cout<<"enter your cname";
	cin>> name;
	cout<<"enter current reading";
	cin>>cr;
	cout<<"enter present reading";
	cin>>pr;
	uc=cr-pr;
	cout<<"your current reading"<<uc<<endl;
	return 0;
}