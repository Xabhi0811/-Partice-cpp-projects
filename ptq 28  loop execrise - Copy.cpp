#include<stdio.h>
int main ()
{

	int a,b,c,m;
     char ch;

do{
	printf("%d %d %d",&a,&b,&c);
	m=(a>b&&a>c?a:(b<c)?b:c);
	printf("max num= %d\n",m);
	printf("like to cont...(y/n)");
	scanf("%c",ch);
} 
while(ch=='y'||ch=='y');
return 0;}