#include<iostream>
using namespace std;
class dist{
	private:
		int feet,inches;
		public:
			void read();
			void show();
			dist add(dist d);
                     
};
void dist::read()
{
	cout<<"enter feet and inches";
	cin>>feet>>inches;
}
void dist::show(){
	cout<<feet<<"feet"<<inches<<"inches"<<endl;
}
dist dist::add(dist d)
{
	dist t;
	t.feet=feet+d.feet;
	t.inches=inches+d.inches;
	if(t.inches>=12)
	 {
	 	t.feet=t.feet+t.inches/12;
	 	t.inches=t.inches%12;
	 }
	 return(t);
}
int main()
{
	dist e1,e2,e3;
	e1.read();e2.read();
	e1.show();e2.show();
	e3=e1.add(e2);
	e3.show();
	return 0;
}
