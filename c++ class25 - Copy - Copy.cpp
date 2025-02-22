 #include<iostream>
 using namespace std;
 void show(int *n)
 {
 	*n=100000000;
 }
 int main()
 {  int a; 
    a=10;
   cout<<"a"<<a<<endl;
   show(&a);
   cout<<"a"<<a<<endl;
   return 0;
 }