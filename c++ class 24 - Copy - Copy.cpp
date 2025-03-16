/* to display size of datatype and pointer variable */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int a=10,*ip;
  char c='A',*cp;
  float e=10.45,*fp;
  double d=34.67,*dp;
  ip=&a;   cp=&c;   fp=&e;   dp=&d;
  cout<<"1. int "<<sizeof(a)<<","<<sizeof(ip)<<endl;
  cout<<"2. char "<<sizeof(c)<<","<<sizeof(cp)<<endl;
  cout<<"3. float "<<sizeof(e)<<","<<sizeof(fp)<<endl;
  cout<<"4. double "<<sizeof(d)<<","<<sizeof(dp)<<endl;

  cout<<"5. int "<<sizeof(*ip)<<endl; 
  cout<<"6. char "<<sizeof(*cp)<<endl; 
  cout<<"7. float "<<sizeof(*fp)<<endl; 
  cout<<"8. double "<<sizeof(*dp)<<endl;
  getch();
  return 0 ;}
