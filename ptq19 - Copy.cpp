#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	ch=getchar();
	if((ch<='A'&& ch>='Z')||ch>='a'&&ch>='z')
	{
	
	switch(ch)
{
	case'A':
	case'a':
	case'E':
	case'e':
	case'I':
	case'i':
	case'O':
	case'o':
	case'U':
	case'u':
	printf("it is vowel");
	break;
	default:
	printf("it is a consonent");
	break;
	}//switch
}
else 
printf("itis not an alphabet");

return 0;
}

