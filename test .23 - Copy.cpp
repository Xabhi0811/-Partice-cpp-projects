 #include<stdio.h>
 int main (){
	int a,b,c,d,op;
	char ch;
     start :
	printf("make choise do you want\n");
	printf("1.addition of two nums\n");
	printf("2.difference of two nums\n");
	printf("3.squre of nums\n");
	printf("4.cube of nums\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			printf("enter any two nums");
			scanf("%d %d",&a,&b);
			c=a+b;
			printf("sum of two nums=%d\n",c);
			break;
			
			case 2:
				printf("enter any two nums");
				scanf("%d %d",&a,&b);
			     c=a-b;
				printf("difference of two nums=%d\n",c);
				break;
				
				case 3:
					printf("enter any nums");
					scanf("%d",&a);
					b=a*a;
					printf("squre of two nums=%d",b);
					break;
					
					case 4:
					printf("enter any num");
					scanf("%d",&a);
					b=a*a*a;
					printf("cube of two nums=%d",b);
					break;
					
					default:
				     printf("invaild choise");
			            break;
					  }
					 
					 printf(" like to cont...... (y/n)");
					 fflush (stdin);
					 scanf("%c",&ch);
					 if(ch=='Y'||ch=='y')
					 goto start;

                       return 0;}