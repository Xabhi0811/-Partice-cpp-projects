#include<stdio.h>
int main()
{
	int i,s=0;
	printf("starting the loop\n");
	
	for(i=1; i<=10;i++)
	{
		s=s+i;
		printf("%d abhishek %d\n\n",i,i*2);
	}
	printf("sum= %d\n",s);
	return 0;
}