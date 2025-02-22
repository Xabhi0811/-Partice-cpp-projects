#include<iostream>
using namespace std;
class emp{
	private:
	int empno;
	char empname[20];
		public:
		void input();
		void output();

	class sal{
		private:
			
			float net,sal,bsal,hsal,esal,pf;
			public:
				void input();
				void output();
				void cal();
};	};
	     void emp::input()
	     {
	     	cout<<"enter your name and id no";
	     	cin>>empname>>empno;
		}
		
		void emp:: sal::input()
		{
			cout<<"enter your sal";
			cin>>sal;
		}
		    void emp::sal::cal()
		    
		    {
		    	bsal=.10*sal;
		    	hsal=.10*sal;
		    	esal=.10*sal;
                pf=.10*sal;    	
		    	net=bsal+hsal+esal+sal-pf;
		    }
		     void emp::output()
		     {
		     	cout<<"your name is"<<empname<<"your id no is "<<empno<<endl;
			}
			 void emp::sal::output()
			 {
			 	cal();
			 	cout<<"the toatl of net sal is "<<net<<endl;
			 }
			 int main(){
			 
			 emp e; 
			  emp::sal s;
			 e.input();s.input();
			e.output(); s.output();
			return 0;
		}
			
			
			
			
			
			
			
			