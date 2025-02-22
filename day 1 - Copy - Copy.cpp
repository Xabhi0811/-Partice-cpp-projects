#include<iostream>
using namespace std;
class student {
     private:
	int roll;
	char name[20];
	float m1,m2,m3,total,marks;
	public:
		void input();
		void output();
		void cal();
};
void student::input(){
	cout<<"enter any num roll, name, m1,m2,m3";
	cin>>roll>>name>>m1>>m2>>m3;
}
void student::output()
{
	cal();
	cout<<"roll of student is and name total no"<<endl<<roll<<endl<<name<<endl<<total;
}
void student::cal()
{
        total=m1+m2+m3;
        total=total/3;
}
int main()
{
	student s;
	s.cal();
	s.input();
	s.output();
	return 0;
}