#include<stdio.h>
void show(char*p)
{
	while(*p!='\0')
	{
		printf("%c\n",*p);
		p++;
		
	}
}
int main (){
	char n[20];
	printf("enter any string");
	//canf("%s",n);
	gets(n);
	 show(n);
	 return 0;}