 #include<stdio.h>
int main()
{
	int a,b,c,d,op;
	char ch;
	start:
	printf("any choise\n");
	printf("\nfor addition of num");
	printf("\nfor subtruction num");
	printf("\nfor cube of num");
	printf("\nsqure of num");
	scanf("%d",&op);

       switch(op){
	
	case 1:
		printf("enter any two num");
		scanf("%d %d",&a,&b);
		c=a+b;
		printf("sum of two=> %d",c);
		break;
		
		case 2:
			printf("enter any two num");
			scanf("%d %d",&a,&b);
			c=a-b;
			printf("difference of two=> %d",c);
			break;
			
			case 3:
				printf("enter any num");
				scanf("%d",&a);
				b=a*a*a;
				printf("cube=>%d",b);
				break;
				
				case 4:
					printf("enter any num");
					scanf("%d",&a);
					b=a*a;
					printf("squre of a num =>%d",b);
					break;
					
				
						default:
	                         printf("invaild choise");
						break;
					}
					
					printf("\nlike to cont....(Y/n)");
					fflush(stdin);
					scanf("%c",&ch);
					if(ch=='Y'||ch=='y')
					goto start;
						return 0;}*/
						  

	
	
