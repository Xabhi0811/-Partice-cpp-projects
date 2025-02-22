/*#include<iostream>
using namespace std;
class sum{
	 private:
	 	int a,b,c ,e,f;
	 	 public:
	 	 	void input();
	 	 	void cal();
	 	 	void output();
	 	 	void pro();
	 	 	void diff();
};
void sum::input()
{
	cout<<"enter any num";
	cin>>a>>b;
}
void sum::output()
{
	cal();
	cout<<"sum of two num"<<c<<endl;
	cout<<"pro of a num"<<b<<endl;
	cout<<"diff of a num"<<a<<endl;
}
void sum::cal()
{
	c=a+b;
}
void sum::pro()
{
	a=b-c;}
void sum::diff()
{
	b=a-c;}
	int main(){
		sum s;
		s.input();
		s.cal();
		s.output();
		return 0;
}*/
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














































