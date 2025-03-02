#include<iostream>
using namespace std;
class student {
	int roll;
	char name[20];
	float n1,n2,n3,total,per;
	void cal()
	{
		total=n1+n2+n3;
		per=total/3;
		}
public:
	void input();
	void output();
};
void student::input()
{
	cout<<"enter roll ,name,m1,m2,m3";
	cin>>roll>>name>>n1>>n2>>n3;
}
void student::output()
{
	cal();
	cout<<"total"<<total<<name<<endl<<roll<<endl<<"per"<<per<<endl;
}
int main(){
	student s; 
	s.input();
	s.output();
	return 0;
}
