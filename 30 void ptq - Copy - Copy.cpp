#include<stdio.h>
#include<conio.h>
void are_square(int s)
{
	printf("area of square= %d\n");
}
void permeter_rectangle(int p,int q)
{
	printf("permeter of rectangle= %d\n");
}
void area_circle(int r) {

printf (" area of circle= %d\n");
}
void max_3nos(int a,int b,int c,int d )
{
	printf("max of 3 nos= %d\n"); 
}
void table_ofno(int a)
{
	printf("table of= %d\n ");
 } 
 int main() {
int op=0,a,b,c;
while (op!=6) 
{
system("cls");
printf ("1.area of squre\n ");
printf ("2.permeter of rectangle\n ");
printf ("3.area of circle\n ");
printf ("4. max of 3 nos\n ");
printf ("5.table of num\n ");
printf ("6.exit\n ");
printf("enter any choise");
scanf("%d,&op");
switch(op)
{
 case1:
 printf("enter any side");
 scanf("%d",&a);
 are_square(a);
 break ;
 
 case2:
printf("enter a lenght and breath ");
scanf("%d %d",&p,&q);
permeter_rectangle(int p,int q)
break ;

 
}
	
}
getch();
return 0;
}

