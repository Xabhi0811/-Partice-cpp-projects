#include<iostream>
using namespace std;
int main(){
	int y,m,d,w;
	cout<<"enter any num";
	cin>>d;
	y=d/365;
	d=d%365;
	d=d/30;
	d=d%30;
	w=d%7;
	w=d/7;
	cout<<"year"<<y<<"month"<<m<<"week"<<w<<"days"<<d<<endl;
	return 0;
}