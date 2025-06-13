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
		void sum::input()
		{
			cout<<"enter any two num";
			cin>>a>>b;
		} 
		void sum::cal()
		{
			c=a+b;
			
		}
		void sum::output()
		{
			 cal();
			cout<<"sum of two num "<<c<<endl;
		}
		 int main()
		 {
		 	sum s;
		 	s.input();
		 	s.output();
		 	return 0;
		 }
