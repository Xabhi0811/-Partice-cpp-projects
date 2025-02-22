
#include <stdio.h>
int main (){
	int n,i,z=0;
	printf("enter any no");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			
			z=1;
			break;
		}
	}if(z==0)
	printf("no is prime ");
	else 
	printf ("it is not prime ");
	return 0;}
	
	
	
	
	
	
	
	
