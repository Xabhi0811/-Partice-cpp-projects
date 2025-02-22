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
  cout<<"1. int "<<sizeof(a)<<","<<sizeof(ip)<<endl;//4 8
  cout<<"2. char "<<sizeof(c)<<","<<sizeof(cp)<<endl;//1 8
  cout<<"3. float "<<sizeof(e)<<","<<sizeof(fp)<<endl;//4 8
  cout<<"4. double "<<sizeof(d)<<","<<sizeof(dp)<<endl;//8 8

  cout<<"5. int "<<sizeof(*ip)<<endl; //int 4
  cout<<"6. char "<<sizeof(*cp)<<endl; //char 1
  cout<<"7. float "<<sizeof(*fp)<<endl; //float 4
  cout<<"8. double "<<sizeof(*dp)<<endl;//double 8
  getch();
  return 0 ;}
