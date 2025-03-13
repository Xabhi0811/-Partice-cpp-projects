#include<iostream>
using namespace std;
class emp{
	private:
	int empno;
	char empname;
	public:
		void input();
		void output();
		
		class sal{
			int net ,cal;
			float bsal,hra,cla,ta,cca,pf;
			public:
				void intput();
				void output();
				void total ();   
                        };
};
void emp::input()
{
	cout<<"enter any empno and ename";
	cin>>empno>>empname;
}
     void emp::sal::intput()
     {
     	cout<<"enter your sal";
     	cin>> net ;
	}
	 void emp::sal::total()
	{
	     bsal=10*net;
		hra=10*net;
		cla=10*net;
		ta=10*net;
		cca=10*net;
		pf=10*net;
	}
	void emp::output()
	{
		cout<<"name is empno and empname is"<<empno  <<empname<<endl;
		
	}
	void emp::sal::total()
	{
		cal=bsal+hra+cla+ta+cca-pf;
		cout<<"net sal of emp is"<<net<<cal<<endl;
	}
	int main()
	{
		emp.e; sal.s;
		e input; s input;
		e output; e output;
		return 0;
	}
	
