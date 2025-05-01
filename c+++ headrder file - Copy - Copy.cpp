#include<fstream>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void create()
{
	ofstream adc;
	char str[80],ch;
	abc.open("hello");
	if(abc.fail())
	{
		cout<<"unable to open the file"<<endl;
		getch();
		exit(1);
			}
			do{
				cout<<"enter the text to store";
				fflush(stdin);
				gets(str);
				abc<<str<<endl;
				cout<<"would you like to cout....(y/n)";
				fflush(stdin);
				cin>>ch;
			} while(ch=='y'||ch=='Y');
			abc.close();
		}
}
void display()
{
	ifstream pqr;
	char ch;
	cout<<"the contents of the file are"<<endl;
	pqr.open("hello");
	if(pqr.fail())
	getch();
	exit(1);
}
while(!pqr.eo())
{
  pqr.get(ch);
  //cout<<ch;
  cout.put(ch);
}
pqr.close();
}int main();
create();
display();
return 0;}

