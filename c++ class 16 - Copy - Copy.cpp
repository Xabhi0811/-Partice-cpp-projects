#include<iostream>
using namespace std;
class stu{
	private:
		int empno;
		char empname;
		public:
			stu();
			void input();
			void output();
			void cal();
};
  void stu::input()
  {
  	cout<<"enter empno empname ";
  	cin>>empno>>empname;
  }    
   
   void stu::output()
   {
   	cout<<"your given result is"<<empno<<empname;
   }
   int main(){
   	stu s;
   	s.input();
   	s.output();
   	return 1;
   }