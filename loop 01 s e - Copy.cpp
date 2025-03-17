#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 nos ");
	scanf("%d %d",&a,&b);
	printf("1st value = %d 2nd value = %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;//3
	printf("1st value = %d 2nd value = %d\n",a,b);
	return(0);
}
