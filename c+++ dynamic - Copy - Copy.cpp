#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,i;
	char ch;
	do{
		cout<<"enter total element";
		cin>>n;
		 int *p= new int[n];
		if( p ==NULL)
		{
			cout<<"memory allociation failed "<<endl;
			return 0; 
		}
		for(i=0;i<n;i++)
		{
			cout<<"enter the elements";
			cin>>p[i];
			
		}
		for(i=0;i<n;i++)
		{
			
			cout<<p[i]<<endl;
		} delete[]p;
		cout<<"like to cont......(y/n)";
		cin>>ch;
	}   while(ch=='Y'||ch=='y');
	  getch();
	return 0;
}