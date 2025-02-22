#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character ");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	//if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	printf("it is an alphabet");
	else
	printf("it is not an alphabet");
	return 0;
}