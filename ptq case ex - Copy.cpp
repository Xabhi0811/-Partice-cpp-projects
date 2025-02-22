#include<stdio.h>
int main ()
{ 
int a,b,c,d,i,op;
//char ch;
//start:
printf("choise any option\n");
printf(" sum of to num\n ");
printf(" diff of two num\n");
printf(" square of num\n");
printf(" cube of num\n");
printf("05 division of two num");
scanf("%d",&op);
switch(op)

{
	case 1:
	printf(" enter any two num ");
	scanf("%d %d",&a,&b);
	d=a+b;
	printf(" sum= %d\n",c);
	break;
	
	case 2:
		printf("enter any two num ");
		scanf("%d %d",&a,&b);
		d=a-b;
		printf("diff= %d\n",c);
		break;
		
		case 3:
			printf("enter any num");
			scanf("%d",a);
			d=a*a;
			printf("sqaure= %d",&d);
			break;
			
			case 4:
			printf("enter any cube ");
			scanf("%d",a);
			d=a*a*a;
			printf("cube= %d",&d);
			break;
			
			case 5:
			printf("enter any division");
			scanf("%d %d",&a);
			d=a/2;
			printf("%d",&d);
			break;
			
			default:
			printf("invalid option\n");
			break;
		}
			 //	printf("do u when to choise option again (y/n) ");
			 	//scanf("%c",&ch);
			 //if (ch=='y'||ch=='Y')
			 //goto start;	}
return 0;}