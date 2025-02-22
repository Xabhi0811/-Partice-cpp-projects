#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *p ;
	//p=&a;
	cout<<(&)*a<<endl;
	cout<<sizeof(p)<<endl;
	cout<<&a<<endl;
	return 0;
}