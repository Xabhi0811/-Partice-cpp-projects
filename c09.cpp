#include<iostream>
using namespace std;
 class task{
 	private:
 	int a,b,c,d,e,f;
 	public:
 		void input();
 		void output();
 		void cal();
 		void cube();
 		void squre();
 };
  void task:: input()
  {
  	cout<<"enter any num two";
  	cin>>a>>b;
  	
  }
  void task::cal(){
   
  	c=a*a*a;
  	
   	b=a*a;
}
   void task::output()
   {
   	cal();
   	cout<<"sum of two num"<<c<<"cube of two num"<<b<<endl;
   		
   }
   int main()
   {
   	task t();
   	t.input();
   	t. output();
   	t.cal();
   	return 0;
   }
