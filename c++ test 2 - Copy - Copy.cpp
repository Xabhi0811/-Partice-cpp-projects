#include<iostream>
using namespace std;
class student{
	private:
		int a,b,c,d,e;
		public: 
		void input();
		void output();
		void percentage();
};
void student::input() 
{
cout<<"enter any 3 number";
cin>>a>>b>>c;
}
void student::percentage()
{
	d=a+b+c;
	e=d/3;
	
}
void student::output()
{
	percentage();
	cout<<"percentage of 3 numbers are"<<d<<endl<<e<<endl;
}
int main(){
	student p;
	p.input();
	p.output();
	return 0;
}
