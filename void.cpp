#include<stdio.h>
void squre()
{int a,b;
printf("enter any no");
scanf("%d",&a);
b=a*a;
printf("squre of a num=>%d\n",b);

}

void max 3()
{
printf("enter any 3no");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
d=a;
else if(b>c)
d=b;
else
d=c;
printf("max no=>%d\n",d);
}
void sum ()
{
	int a,b,c;
	printf("enter 2 no");
	scanf("%d %d",&a,&c);
	c=a+b;
	printf("sum=>%d\n",c);
}
void table()
{
	int i,n,t;
	printf("enter any no");
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
	while(op!=5)
{
	system("cls");
	printf("main menu\n");
	}	
}
printf("1.squre of a no\n");
printf("2.sum of 2nos\n");
printf("3.max of 3no\n");
printf("4.table of a no");
printf("5.exit");
printf("enter your choise");
scanf("%d",&op);
sy
