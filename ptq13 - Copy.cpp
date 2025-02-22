 #include<stdio.h>
int main ()
{ 

int i=7;
abhi:
   printf ("%d\n", i);
	i=i+7;
	if (i<=70)
	goto abhi;
	return 0;
	}