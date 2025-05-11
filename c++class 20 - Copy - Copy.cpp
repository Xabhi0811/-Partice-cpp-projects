//Bank Project
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
#include<windows.h> 
using namespace std;
COORD coord={0,0}; 
void gotoxy(int x,int y)
{
	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
using namespace std;
#define size 3

class bank
{
private:
   int ano;
   char name[20];
   float bal;
public:
     bank();//default cons
     ~bank();//destructor
     void deposit();
     void withdraw();
     void cal_interest();
     void line1();
     void show();
     void disp_all();
     void heading();
     void get();
     void disp_by_ano();
     void disp_by_name();
     int check_ano(int);
     int check_amt(float);
     void bank_bal();
     void menu();
 };
       bank b[size]; 

       bank::bank()
       {
	 ano=0;
	 name[0]='\0';
	 bal=0;
       }
       bank::~bank()
       {
	 cout<<"Mr./Ms. "<<name<<" your account is closed"<<endl;
	 cout<<"Please collect your bal "<<bal<<
	 " from counter"<<endl;
	 cout<<ano<<" "<<name<<" "<<bal<<endl;
       }
       void bank::line1()
       {
       int i;
       for(i=2;i<=75;i++)
       {
       cout<<"-";
       }
       cout<<endl;
       }

void  bank ::menu()
{
	//gotoxy(column,row);
	gotoxy(15,3);
	cout<<"   M a i n  M e n u "<<endl;
	gotoxy(15,4);
	cout<<"=================== "<<endl;
	gotoxy(10,6);
	cout<<"1. To display all the details"<<endl;
	gotoxy(10,8);
	cout<<"2. To deposit amount"<<endl;
	gotoxy(10,10);
	cout<<"3. Withdrawl of amount "<<endl;
	gotoxy(10,12);
	cout<<"4. To display the details by account number"<<endl;
	gotoxy(10,14);
	cout<<"5. To display details by name "<<endl;
	gotoxy(10,16);
	cout<<"6. Interest calculation "<<endl;
	gotoxy(10,18);
	cout<<"7. To view balance of bank"<<endl;
	gotoxy(10,20);
	cout<<"8. Exit"<<endl;
	gotoxy(10,22);
	cout<<"Enter your choice ";
}
 void bank::heading()
 {
 //textcolor(YELLOW);
 cout<<"              B A N K   R E P O R T";
 cout<<endl;
 cout<<"              ======================";
 cout<<endl;
 line1();
 //textcolor(WHITE);

 cout<<setw(10)<<"  Acc No "<<setw(30)<<"     Name    "
 <<setw(10)<<"   Bal"<<endl;
line1();
 }
 void bank::show()
 {
 cout<<setw(10)<<ano<<setw(30)<<name<<setw(10)<<bal<<endl;
 }
 int bank::check_ano(int n)
 {
 if (n<=0)
 return(0);
 else
 return(1);
 }
int bank::check_amt(float n)
{
if (n<=0)
return(0);
else
return(1);
}
 void bank::get()
 {
 int z=0;
 while(1)//for(;;)
 {
 cout<<"Enter the account number ";
 cin>>ano;
 z=check_ano(ano);
 if (z==1)
 break;
 else
 cout<<"Accno cannot be zero or -ve,try again"<<endl;
 }

 cout<<"Enter the account name ";
 cin>>name;
 strupr(name);

 while(1)
 {
 cout<<"Enter the balance amount";
 cin>>bal;
 z=check_amt(bal);
 if (z==1)
 break;
 else
 cout<<"Invalid balance"<<endl;
 }

}
 void bank::disp_all()
 {
 int i;
 heading();
 for(i=0;i<size;i++)
 {
 b[i].show();
 }
 line1();
 }

void bank:: deposit()
   {
   int tn,z=0,i,z1;
    float ma;
    cout<<"Enter the account number ";
    cin>>tn;
    for(i=0;i<size;i++)
    {
    if (b[i].ano==tn)
    {
    z=1;
    while(1)
    {
    cout<<"Enter the amount to deposit";
    cin>>ma;
    z1=check_amt(ma);
    if (z1==1)
    break;
    else
    cout<<"Invalid amount"<<endl;
    }
    b[i].bal=b[i].bal+ma;
    }
    }
    if (z==0)
    cout<<"Invalid account number,Record is not present"<<endl;
    }
  void bank::withdraw()
  {
  int i,z=0,tn,z1;
  float m2;
  cout<<"Enter the account number ";
  cin>>tn;
  for(i=0;i<size;i++)
  {
  if (tn==b[i].ano)
  {
  z=1;
   while(1)
   {
   cout<<"Enter the amount to withdraw ";
   cin>>m2;
   z1=check_amt(m2);
   if (z1==1)
   break;
   else
   cout<<"Invalid amount"<<endl;
   }

   if ((b[i].bal-m2)>=1000)
   b[i].bal=b[i].bal-m2;
   else
   cout<<"Amount cannot be widthdrawn";
   }
   }
   if (z==0)
   cout<<"Invalid account number , record is not present"<<endl;
   }
void bank::disp_by_ano()
{
 int i,tn,z=0;
 cout<<"Enter the account number ";
 cin>>tn;
 for(i=0;i<size;i++)
 {
 if (b[i].ano==tn)
 {
 z=1;
 heading();
 b[i].show();
 }
 }
 line1();
 if (z==0)
 cout<<"Record not present"<<endl;
 }
 void bank::disp_by_name()
 {
 int i,z=0;
 char tn[20];
 cout<<"Enter the name ";
 cin>>tn;
 strupr(tn);
 for(i=0;i<size;i++)
 {
 if (strcmpi(b[i].name,tn)==0)
 {
 z=1;
 heading();
 b[i].show();
 }
 }
 line1();
 if ( z==0)
 cout<<"Record is not present"<<endl;
 }
void bank:: cal_interest()
{
int i;
for(i=0;i<size;i++)
{
 b[i].bal=b[i].bal+b[i].bal*.05;
 }
 }
  void bank::bank_bal()
 {
 int i;
 float tot=0;
 heading();
 for(i=0;i<size;i++)
 {
 b[i].show();
 tot=tot+b[i].bal;

 }
  line1();
  cout<<"\n\n\nGrand total ="<<tot<<endl;
 }

 int main()
{
  bank b1;
  int op,i;
  //clrscr();
  for(i=0;i<size;i++)
  {
    b[i].get();
  }
  while(op!=8)
  {
    system("cls");
    //system("color backgroundforeground");
    //background:0-15(0-9 + A-E)
    system("color E4");
    b1.menu();
    cin>>op;
    system("cls");
    switch(op)
    {
	case 1:
		b1.disp_all();
		break;
	case 2:
		b1.deposit();
		break;
	case 3:
		b1.withdraw();
		break;
	case 4:
		b1.disp_by_ano();
		break;
	case 5:
		b1.disp_by_name();
		break;
	case 6:
		b1.cal_interest();
		break;
	case 7:
		b1.bank_bal();
		break;
	case 8:
		cout<<"End of the program"<<endl;
		break;
	default:
		cout<<"Invalid choice";
		break;
    }//switch
  getch();
  }//while
  return(0);
}//main
