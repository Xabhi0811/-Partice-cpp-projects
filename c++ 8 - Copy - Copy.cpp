#include<iostream>

using namespace std;
int main(){

	int roll;
	char name[20];
	float per ,total ,m1,m2,m3;
	cout<<"enter your roll no";
	cin>>roll;
	cout<<"enter your name";
	cin>>name;
	cout<<"enter m1,m2,m3";
	cin>>m1>>m2>>m3;
      total=m1+m2+m3;
	 per=total/3;
	 cout<<"your total per name roll"<<per<<endl<<endl<<total<<endl<<name<<endl<<roll; 
	 return 0;	
}
