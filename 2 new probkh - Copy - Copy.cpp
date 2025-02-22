#include<stdio.h>
#include<conio.h>
int main()
{
  char n[5][20];
  int i=0;
  //input
  for(i=0;i<5;i++)
  {
    printf("Enter any string ");
    scanf("%s",n[i]);
  }
  //display
  for(i=0;i<5;i++)
  {
    printf("%s\n",n[i]);
  }
  getch();
  return(0);
}