#include<stdio.h>
int main ()
{int a[10],i,n,z=0;
for (i=0;i<10;i++)
{
	printf("enter any a[%d] nums ",i);
	scanf("%d",&a[i]);
} 
for(i=0;i<10;i++)
 {
printf("which nums u want seacher");
 scanf("%d",&n);  
if(a[i]==n)
{
z=1;
break;
}
}if(z==0)
printf("element is not present");
else
printf("element is present ");
return 0;

}
 	
 	
 	
 	
 	
 	
