#include<iostream>
using namespace std;
void sum(int *a , int *b)
{
	int sum = *a + *b;
	int diff = *a - *b;
	*a = sum;
	*b = diff;
	if(diff<0)
	{ 
	diff = -1*diff;
	}
}
 int main()

{
	int a,b ,diff;
	cout<<"enter any num";
	cin>>a >>b;
	sum(&a,&b);
	cout<<"sum"<<a<<endl;

	
		if(diff<0)
	{ 
	diff = -1*diff;
	
	}
	
	cout<<"differnec"<<b<<endl;
	return 0;
	
}
