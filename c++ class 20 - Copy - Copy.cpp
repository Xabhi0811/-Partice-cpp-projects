#include<iostream>
using namespace std;
class example{
	public:
		static int count ;
		example(){
			count++;
			
		}
};
int example::count=0;
int main(){
	example e1;
	example e2;
	cout<<"the number of object created is :"<<example::count<<endl;return 0;  
}

#include<iostream>
using namespace std;
class student
{
private:
	int roll;
	char name[20];
	float per;
	public:
		student();
		student (int r,char n[],float p);
		void input();
		void output();
};
student::student()
{
	roll=0;
	name[0]='\0';
	per=0;
}
student::student(int r,char n[],float p)
{
	
	roll=r;
	strcpy(name,n);
	per=p;
}
void student::input()
{
	cout<<"enter roll,nameand per";
	cin>>roll>>name>>per;
	}
	void student::output()
	{
		cout<<"roll"<<roll<<"name"<<name<<"per"<<per<<endl;
		
	}
	int main()
	{
		student s1,s2(500,"abhishek",98.90);
		s1.input();s2.input();
		s2.output();s2.output();return 0;
	}
