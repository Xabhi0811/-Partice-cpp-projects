#include<iostream>
using namespace std;
class emp{
	private:
	  int a,b,c;
	  public:
	  	void input();
	  	void output();
	  	void cal();
	  	
};
void emp::input()
{
	cout<<"enter any two no";
	cin>>a>>b;
}
void emp::cal()
{
	c=a+b;
}
void emp::output()
{ cal();

	cout<<"sum of num"<<c<<endl;
}
int main(){
	emp s;
	s.input();
	s.output();
	return 0;
	
}