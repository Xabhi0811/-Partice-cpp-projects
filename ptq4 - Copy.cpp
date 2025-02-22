//Q17
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any no ");
	scanf("%d",&a);
	if(a==0)
	printf("no is zero");
	else 
	  if(a>0)
	  printf("no is +ve");
	  else
	  printf("no is -ve");
	return 0;
}