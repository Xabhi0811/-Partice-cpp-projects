#include<stdio.h>
int main (){
	int n,i,t;
	char ch;
	do {
		printf("enter any no");
		scanf("%d",&n);
		for(i=1;i<=10;i++);
		{
			t=n*i;
			printf("%d*%d\n",i,n,t);
			
		}
		printf("like to cont..(Y/N)");
		scanf("%c",&ch);	
	}while(ch=='Y'||ch=='y');
	return 0;
}