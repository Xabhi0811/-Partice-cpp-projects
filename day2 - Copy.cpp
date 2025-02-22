#include<iostream>
using namespace std;
class stud{
	
	private:
	int roll,no;
	char name=(sham,john),add[20];
	public:
		void input();
		void output();
};
void stud::input()
{
	cout<<"enter any roll num,no,add";
	cin>>roll>>endl>>no>>name>>endl>>add;
}
      void stud::output()
      {
      	cout<<roll<<endl<<no<<endl<<name<<endl<<add;
      	
	 }
	 int main()
	 {
	 	stud s;
	 	s.input();
	 	s.output();
	 	return 0;
	 }