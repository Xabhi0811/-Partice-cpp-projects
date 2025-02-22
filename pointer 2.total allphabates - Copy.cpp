#include<stdio.h>
void show (int *p,int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		printf("value %d address %u\n",*p,p);
		printf("%d\n",*p);
		s=s+*p;
		p++;		
	} printf("enter total element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d element ",i);
		scanf("%d",&a[i]);
		
	} 
	show(&a[0],n);
	return 0;
	
}