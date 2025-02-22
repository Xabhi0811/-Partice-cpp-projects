#include<stdio.h>
int main (){
	 int a[10] [10],i,j,r,c,s=0;
	 printf("enter total row and columns ");
	 scanf("%d %d",&r,&c);
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf(" enter [%d] [%d] element ",i,j);
	 		scanf("%d",&a[i] [j]);	
		 }
	 } for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("%d",a[i][j]);
	 
	 		s=s+a[i][j];
	 		
		 }  
		 printf("\n");
		  
} printf(" transport of matrix\n");
	 for(j=0;j<c;j++)
	 {for(i=0;i<r;i++)
	 
	 	{
	 		printf("%d",a[i][j]);
	 		s=s+a[i][j];
	 		
		 }
		 printf("\n");	}
		  printf("sum => %d \n",s);
	  return 0;}	
	
	
	
	
	
