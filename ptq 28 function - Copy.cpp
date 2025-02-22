#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void square() 
{int a,b;
printf("enter any no");
scanf("%d",&a);
b=a*a;
printf("squre=%d\n",b);	
}
void Max3()
{
	int a,b,c,d;
	printf("enter 3nos");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	d=a;
	else if(b>c)
	a=b;
	else 
	d=c;
   printf("Max no = %d\n",d);
	
} 
void sum ()
{
	int a,b,c;
	printf("enter 2no");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum=%d\n",c);
}
void table()
{
	int i,n,t;
	printf("enter many no");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		t=n*i;
		printf("%d*%d=%d\n",n,i,t);
		
	}
}
int main()
{
	int op=0;
	while (op!=5)
	{
		system("cls");
		printf("main menu\n");
		printf("1.squre of a nos\n");
		printf("2.sum of 2nos\n");
		printf("3.max of 3no\n");
		printf("4.table of a no\n");
		printf("5 exit\n");
		printf("enter your choise");
		scanf("%d",&op);
		system("cls");
		switch(op)
		{
			case 1:
			square();
			break;
			
			case 2:
			sum();
			break;
			
			case 3:
			Max3();
			break;
			
			case 4:
				table();
				break;
				
				case 5:
					printf("end of the program\n");
					break;
					
					default:
						printf("invaild choise \n");
						break;
						}
						getch();
						}
 return 0;}
