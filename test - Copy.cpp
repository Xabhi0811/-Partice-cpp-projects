 #include<stdio.h>
int main ()
{
int a,b,c,d,op;
printf("chosie any num\n");
printf("1.addtion of two nums\n");
printf("2.difference b/w two nums\n");
printf("3.multiption of two nums\n");
printf("4.squre of two nums\n");
printf("5.cube of two nums\n");
scanf("%d",&op);
switch(op)
{ start:
	
case 1:
printf("enter any two nums ");
scanf("%d %d",&b,&c);
a=b+c;
scanf("sum of two nums=%d",a);
break;	
	
	case 2:
		printf("enter any two nums");
		scanf("%d %d",&a,&b);
		c=a-b;
		scanf("difference of two nums=%d",&c);
		break;
		
		case 3:
			printf("enter any nums");
			scanf("%d %d ",&a,&c);
			b=a*c;
			printf("squre of nums=%d",b);
			break;
			
	
           case 4:
           	printf("enter any num");
           	scanf("%d",&a);
           	b=a*a;
           	printf("squre of a num=%d",b);
           	break;
           	
           	case 5:
           		printf("enter a num");
           		scanf("%d",&a);
           		b=a*a*a;
           		printf("cube of a num=%d",b);
           		break ;
           		
           		default:
           		printf("invaild choise");
           		break;}
           		
           		printf("like to conti.......(y/n)");
           		if(ch=='Y'||ch=='y')
           		 goto start;
			 else
			printf("thank u ");

return 0;
}