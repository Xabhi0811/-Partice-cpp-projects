#include<stdio.h> 
int main() 
{
 char ch;
 printf("enter any character");
 scanf("%c",&ch);
 if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'))
 printf("this is an alphabet");
 else
 printf("this is not alphabet");
	 return 0;
}