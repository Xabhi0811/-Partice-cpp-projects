#include<stdio.h>
int main()
{
int a,b,c,d,op;
printf("make any choise\n");
printf("1.sum of nos\n");
printf("2.diff of nos\n");
printf("squre of nos\n");
printf("cube of nos\n");
scanf("%d",&op);
switch(op)
     {
     	case 1:
     	printf("enter any 2 num");
     	scanf("%d %d",&a,&b);
     	c=a+b;
     	printf("sum= %d\n",c);
     	break;
     	
     	case 2:
     	printf("diff any 2 num ");
     	scanf("%d %d",&a,&b);
     	d= a-b;
     	printf("diff= %d\n",d);
     	break;
     	
     	case 3:
     	printf("enter any nos");
     	scanf("%d",&a);
     	c=a*a;
     	printf("squre= %d/n",c);
     	break;
     	
     	case 4:
     	printf("enter any nos");
     	scanf("%d",&a);
     	b=a*a*a;
     	printf("cubic= %d\n",b);
     	break;
     	
     	default:
     		printf("invalid choise");
     		break;
	}
	
	return 0;
}