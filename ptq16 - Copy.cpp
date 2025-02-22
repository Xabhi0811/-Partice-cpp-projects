#include<stdio.h>
int main(){

char ch;
printf("enter your charcater");
scanf("%c",&ch);
if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
printf("this is alphabet");
else 
printf("this is not alphabets");
return 0;
}
