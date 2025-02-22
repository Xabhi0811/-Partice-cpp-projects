#include<stdio.h>
void addtition()
{
int a,b,c,op;
printf("enter any two num");
scanf("%d %d",&a,&b );
c=a+b;
printf("sum of two num=>%d",c);
}
 void sub()
 {
 	int a,b,c;
 	printf("enter any two num");
 	scanf("%d %d",&a,&b);
 	c=a-b;
 	printf("sub of two num=>%d",c);
 	
 }
 
 void squre()
 {
 	int a,b;
 	printf("enter any num");
 	scanf("%d",&a);
 	b=a*a;
 	printf("squre of num=>%d",b);
 }
 
 void cube()
 {
 
 int a,b;
 printf("enter any num");
 scanf("%d",&a);
 b=a*a*a;
 printf("cube of num=>%d",b);
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
 int main(){
 	
 int op=0;
 	while(op!=5)
printf("make addito");
scanf("%d",op);
switch(op)
{
   case 1:
 	addtition();
 	break ;
 	
 	case 2:
 		sub();
 		break;
 		
 		case 3:
 			squre();
 			break;
 			
 			case 4:
 				table();
 				break;
 				
 				default:
				 printf("invaild choise");
				 break;
				  } 
 return 0;
 
 }