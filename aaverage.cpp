#include<stdio.h>
void average();
int main(){
	average();
	return 0;
	}
	void average()
	{
		int a,b,c,d,e;
		printf("enter any num");
		scanf("%d %d %d",&a,&b,&c);
		d=a+b+c;
		e=d-a+b+c;
		printf("sum of two num=%d",e);
		printf("sum of d =%d",d);
	}
