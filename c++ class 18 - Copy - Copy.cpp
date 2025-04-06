#include<iostream>
using namespace std;
class student2;
class student1{
	private:
		int roll;
		char name[20];
		float age;
	public:
	 void input();
	 void output();
	 friend void cal(student1 A,student2 b );		
};
class student2
{
	private:
		int roll;
		char name[20];
		float age ;
		public:
			void input();
			void output();
			friend void cal(student1 A,student2 b);
};
void student A::input(){
	cout<<"enter roll name an age";
	cin>>roll>>name>>age;
}
void student2::input()
{
	cout<<"roll name age"<<roll<<name<<age<<endl;
}
void cal(student1 A student2 b )
{
	float;
	t=A.age+B.age;
	cout<<"sum of age "<<t<<<endl;
	cout<<"average age"<<t<<endl;
}
int main()
{  
	
	student1 s1;
	student2 s2;
	s1.input();s2.input();
	s2.output();s2.output();
	cal(s1,s2);
	return 0;
}
