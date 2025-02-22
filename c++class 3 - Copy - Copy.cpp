#include<iostream>
using namespace std;
class multi{
	private:
		int a,b,c,d;
		public:
			void input();
			void output();
			void cube();
			void squre();
};
void multi::input()
{
	cout<<"enter any num";
	cin>>a>>b;
	
}
void multi::cube()
{
	c=4*a;
}
void multi::squre(){
	d=a*b;
	
}
void multi::output()
{
	cube();
	squre();
	cout<<"cube of no is "<<c<<endl;
	cout<<"squre of a no is"<<d<<endl;
	
}
int main()
{
  multi m;
 m.cube();
 m.input();
 m.output();
 m.squre();
 return 0;
}