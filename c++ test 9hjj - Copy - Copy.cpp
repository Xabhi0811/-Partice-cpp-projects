#include<iostream>
using namespace std;
class add{
	private: 
	int a,b,c;
	public:
		 void intput();
		 void disp();		
};
  void add::intput()
{
	cout<<"enter any num";
	cin>>a>>b;
}
inline void add::disp()
{
     c=a+b;
     cout<<"sum of two num is "<<c<<endl;
}
int main()
{
	add a;
	a.input();
	a.disp();
	return 0;
}
