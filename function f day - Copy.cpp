
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void squre()
{
	int a,b;
	printf("enter any num");
	scanf("%d",&a);
	b=a*a;
	printf("squre=> %d",b);
	
}
void addtition()
{
	int a,b,c;
	printf("enter two  any num");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("addition=>",c);
}
void cube()
{
	int a,b;
	printf("enter any num");
	scanf("%d",&a);
	b=a*a*a;
	printf("cube of num=>%d",b);
	}
	
	void subtract()
{
	int a,b,c;
	printf("enter any two num");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("subtract=>%d",c);
	
}

void max()
{
	int a,b,c,d;
	printf(" enter any 3 nums");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	d=a;
	else if(b>c)
	d=b;
	else 
	d=c;
	printf("max no =>%d",d);
	}
	 void table()
	{
		int i,n,t;
		printf("enter any num");
		scanf("%d",&n);
		for(i=1;i<=5;i++)
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
		printf("1.squre ofa no\n");
		printf("2.addition\n");
		printf("3.cube\n");
		printf("4.subtract\n");
		printf("5.max of three nums\n");
		printf("6.table of two\n");
		printf("7.exit\n");
		printf("enter any choise");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				squre();
				break;
				 
				 case 2:
				 	addtition();
				 	break;
				 	
				 	case 3:
				 		cube();
				 		break;
				 		
				 		case 4:
				 			subtract();
				 			break;
				 			
							 case 5:
							 	max();
							 	break;
							 	
							 	case 6:
							 		table();
							 		break;
							 		
							 	default:
							 		printf("invaild choise");
							 		break;
							
									 }
									 getch();
									}
									return 0;
	}