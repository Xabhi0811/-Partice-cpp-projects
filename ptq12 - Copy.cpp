#include<stdio.h>
int main()
{
	int roll;
	char name[20];
	float  m1,m2,m3,total,per;
	printf("enter you roll no");
	scanf("%d",&roll);     
	printf("enter your name");
	scanf("%s",name);
	printf("enter your m1 ,m2 and m3");
	scanf("%f %f %f\n",&m1,&m2,&m3);
	total=m1+m2+m3;
	per=total/3;
	printf("total =%.3 per=%.2f\n",total,per);
	if(per>=90)
	printf("grade A");
	else if
	(per>=80)
	printf("grade B");
	else if(per>=70)
	printf("grade C");
	else if (per>=60)
	printf("grade D");
	else if (per>=50)
	printf("grade E");
	else if (per>=40)
	printf ("grade F");
	
	return 0; 
	}
