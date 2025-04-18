#include<iostream>
using namespace std;
int main()
{
  int a=10;
  int *p;
  p=&a;
  cout<<a<<endl;   
  cout<<&a<<endl;  
  cout<<*(&a)<<endl;  //value at address of a
  cout<<p<<endl;   
  cout<<*p<<endl;
  cout<<&p<<endl; //address of p
  cout<<*(&p)<<endl;
  cout<<&(*p)<<endl;
  return(0);
}
