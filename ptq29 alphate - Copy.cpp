/*
check word is alphabet

*/

#include<stdio.h>
void check_alphabet(char ch)
{
 if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
printf("it is an alphabet");
else 
printf("it is not alphabet");
}

	int main(){
	

	char ch;
	printf("enter any aplhabet");
	scanf("%c",&ch);
	check_alphabet(ch);
	return 0;
	
}

