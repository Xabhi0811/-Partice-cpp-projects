#include<iostream>
using namespace std;
class student {
	private :
		int roll;
		char name[20];
		float age;
		public:
			void read();
			void show();
};
void student::read(){
	cout<<"enter roll,nameand age";
	cin>>roll>>name>>age;
}
void student::show()
{
	cout<<"roll"<<roll<<"name"<<name<<"age"<<age<<endl;
}
int main(){

student s;
s.read();
s.show();
return 0;}