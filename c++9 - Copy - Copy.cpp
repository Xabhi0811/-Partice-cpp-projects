#include<iostream>
using namespace std;
int main(){
	int pno,qty;
      float price=400,total;
      cout<<"enter your pno";
      cin>>pno;
      cout<<"enter your qty";
      cin>>qty;
      cout<<"product price="<<price<<endl;
      total= price*qty;
      cout<<"your pno is and total bill is "<<pno<<endl<<total;
      return 0;
      
}