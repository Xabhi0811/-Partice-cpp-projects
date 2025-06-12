 #include<stdio.h>
 int main ()
 {
 	int roll;
 	char name[20];
 	float m1,m2,m3,total,per;
	 printf("enter your roll no"); 
	 scanf("%d",& roll);
	 printf("enter your name");
	 scanf("%s",& name);
	 printf("enter your marks");
	 scanf("%f",&m1);
	 printf("enter your marks");
	 scanf("%f",&m2);
	 printf("enter your marks");
	 scanf("%f",m3);
	total=m1+m2+m3;
	per=total/3;
	printf("Total = %.3f Per = %.2f\n",total,per);

	   return 0;
	   }
