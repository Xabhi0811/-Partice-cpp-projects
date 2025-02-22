//C++ Function Overriding
/*
If derived class defines same function as defined in its 
base class, it is known as function overriding in C++. 
It is used to achieve runtime polymorphism. 
It enables you to provide specific implementation of the function 
which is already provided by its base class.
*/
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