#include<iostream>
using namespace std;
class sum{
	private:
		int a,b,c;
		public:
		void input();
		void output();
		void cal();	
};
void sum:: input()
{
	cout<<"enter any 2num";
	cin>>a>>b;
}
void sum:: output()
{
	cal();
	cout<<"sum of a two num is "<<c<<endl;
}
 void sum:: cal()
 {
 	c=a+b;
 }
 int main(){
 	sum s;
 	s.input();
 	s.output();
 	return 0;
 }