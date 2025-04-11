#include<iostream>
using namespace std;
class emp{
	private:
		int empno;
		float empname;
		public:
			void input();
               void output();
		      
		      class sal{
		      	private:
		      	     int net ,toatl;
		      		float bsal,hsal,fosl,pf;
		      		public:
		      			void input();
		      			void output();
		      			void cal();
		
			 };
                };
			 void emp::input()
			 {
			 	cout<<"enter any num and empname";
			 	cin>>empname>>empno;
			 }
			 void emp::sal::input()
			 {
			 	cout<<"enter any sal";
			 	cin>>net;    
			 }
			 
			 void emp::output()
			 {
			 	cout<<"name of emp and empno";
			 	cin>>empno>>empname;
			 }
			   void emp::sal::cal()
			    {
			    	      bsal=10*net;
			    	      hsal=10*net;
			    	      fosl=10*net;
			    	      pf=10*net;
			    	      toatl=bsal+hsal+fosl-pf; 
			    }     
			    
			    void emp::sal::output()
			    {
			    	cout<<"toatal sal of emp"<<toatl;
			    }
	
			        int main()
			        {
			        	emp e;
					sal m;
			        	e.input(); m.input();
			        	e.output(); m.output();
			        	return 0;
				   }
			 
			
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			   
			 
			   			
