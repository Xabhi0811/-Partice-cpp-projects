//C++ Function Overriding
/*
s 





#include <iostream>  
using namespace std;  
class hello 
{  
    public:  
	void abc()
	{    
		cout<<"abc function of base class"<<endl;    
    }      
};   
class hi: public hello    
{    
 	public:  
  	void abc()    
  	{    
       cout<<"abc function of derived class"<<endl;    
    }    
};  
int main() 
{  
   hi h;    
   h.abc();  
   return 0;  
}
