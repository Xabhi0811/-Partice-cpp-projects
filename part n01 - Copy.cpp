#include<iostream>
using namespace std;
class student {
	private:
		private:
			int no;
			char name[20];
			
			public:
				void input();
				void output();
};
 void student::input()
 {
 	cout<<"enter student name ";
 	cin>>no>>name; 	
 }
 void student::output()
 {
 	cout<<"no of num "<<no<<name<<endl;
 }
 int main()
 {
 	student s;
 	s.input();
 	s.output();
 	return 0;
 }