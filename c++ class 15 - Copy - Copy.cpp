#include<iostream>
using namespace std;
class std{
	private:
	 int empno;
	 char empname;
	 public:
	 	void input();
	 	void output();
	 	
	 	class emp{
	 		private:
	 		int net;
	 		float sal,hsal,bsal,pf;
	 		public:
	 			void input();
	 			void out();
	 			 void cal(); };
};
 void std::input()
 {
 	cout<<"enter any num and name";
 	cin>>empno>>empname;
 }
       void std::emp input()
       {
       	cout<<"enter emp sal";
       	cin>>sal;
       	}
       	
     void std::emp::cal()
     {
     	hsal=0.1*sal;
     	bsal=0.2*sal;
     	net=hsal+bsal-pf;
     	cout<<"total sal of student is"<<net<<endl;
	}
	void std::output()
	{
		cout<<" emp no and name is "<<empno<<empname;
		
	}
	void std::emp::out()
	{
		cal();
		cout<<"total sal of emp is"<<net<<endl;
	}
	int main()
	{ std.s; emp.e;
	   s input(); e input();
	   s output(); s output();
	   return 0;
		
	}
	
