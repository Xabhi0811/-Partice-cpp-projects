#include <stdio.h>
int main(){
 int s,w,g,i,op;
 char snake , water , gun;
 printf("enter any choise\n");
   printf("enter any choise\n");
 printf(" 1.for snake press (s)\n");
 printf("2. for water press (w)\n");
 printf("3.for gun press (g)\n");
 scanf("%d",&op);
 switch (op){
 	
 
{ snake:
if(s>w)
  printf(" u win ");
  else (" u loss ");
}
  {water:
  if(w>g)
  printf("u win");
  else (" u loss");
}
 
	   {
	    
     if(s<g)
      printf("u loss ");
      else ("u win ");
}
        
        case 1:
        	printf("you take snake ");
        	goto snake;
      case 2:
      	printf(" you take water");
          goto water;
		case 3:
		printf(" u take gun");
		goto snake;      
 } return 0;}
 
 
 
 
 
 
 
 
 
 
 
 

