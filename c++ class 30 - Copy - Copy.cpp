#include<iostream>
using namespace std;
class student{
 private:
  int stuno;
  char sname[20];
  float sal;
  public:
  	void input();
  	void output();
};
void student::input()
{

cout<<"enter your empno,name,salary";
cin>>stuno>>sname>>sal;
}
void student::output()
{
	cout<<"empno"<<stuno<<"ename"<<sname<<"sal"<<sal<<endl;
}
int main()
{
	int n,i;
	char ch;
	do{
		cout<<"enter total student";
		cin>>n;
		student*p=new student[n];
		if(p==NULL)
		{
		  cout<<"memory allocatation doesnot ";
		  return 0;
		  
		}
		for(i=0;i<n;i++)
		{
			p->input();
			 p++;
		}
		p=p-n;
		for(i=0;i<n;i++)
		{
		
		  p->output();
		  p++;}
		  delete[]p;
		  cout<<"like to cont....(y/n)";
		  cin>>ch;
		  }
		  while(ch=='Y'||ch=='y');
		  return 0;
}