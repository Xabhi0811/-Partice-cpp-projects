#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct product
{
     int pno;
     char name[10];
     float rate,qty,cost;
};
void line()
{
     int i;
     for(i=1;i<=82;printf("="),i++);
     printf("\n");
}

void heading()
{
     int i;
     //system("color 0C");
     system("color 4E");
     //system("color 0A");
     printf("\n\n\n\n");
     printf("%55s","Inventory Control System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Product Records\n");
     printf("%50s","===============\n");
     line();
     printf("%10s  %20s  %15s %15s %15s\n","product no","product Name","Rate","Quantity","Cost");
     line();
}
void add_product()
{
     FILE *fp;
     struct product p;
     fp=fopen("prod.dat","r");
     if (fp==NULL)
     {
          printf("File is not present , it has to be created\n");
          fp=fopen("prod.dat","w");
     }
     else
     {
          printf("File is present , so open in append mode \n");
          fclose(fp);
          fp=fopen("prod.dat","a");
     }
     printf("\n\n\n\n");
     printf("%55s","Product Management System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Enter the product number ");
     scanf("%d",&p.pno);
     printf("%50s","Enter the product name");
     scanf("%s",p.name);     
     strupr(p.name);
     printf("%50s","Enetr the product rate ");
     scanf("%f",&p.rate);
     printf("%50s","Enter the product qty");
     scanf("%f",&p.qty);
     p.cost=p.rate*p.qty;
     fwrite(&p,sizeof(p),1,fp);
     fclose(fp);
}
void disp_all_products()
{
     FILE *fp;
     struct product p;
     fp=fopen("prod.dat","r");
     if(fp==NULL)
     {
     	printf("Unable to open the file");
     	return;
	 }
     heading();
     while((fread(&p,sizeof(p),1,fp)))
     {
          //printf("%10s  %20s  %15s %15s %15s\n","product no","product Name","Rate","Quantity","Cost");
          printf("%10d %20s %15.2f %15.2f %15.2f\n",p.pno,p.name,p.rate,p.qty,p.cost);
     }
     line();
     fclose(fp);
}
void product_search_pno()
{
     FILE *fp;
     struct product p;
     int z,tn;
     z=0;
     printf("\n\n");
     printf("%55s","Inventory Control System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Enter the product number ");
     scanf("%d",&tn);
     fp=fopen("prod.dat","r");
     if(fp==NULL)
     {
     	printf("Unable to open the file");
     	return;
	 }
     heading();
     while((fread(&p,sizeof(p),1,fp)))
     {
          if (tn==p.pno)
          {
               z=1;
               //printf("%d %s %f %f %f\n",p.pno,p.name,p.rate,p.qty,p.cost);
               printf("%10d %20s %15.2f %15.2f %15.2f\n",p.pno,p.name,p.rate,p.qty,p.cost);
          }
     }
     fclose(fp);
     if (z==0)
          printf("record is not present\n");
     else
          line();
}
void product_search_pname()
{
     FILE *fp;
     struct product p;
     int z;
     char tna[20];
     z=0;
     printf("\n\n");
     printf("%55s","Inventory Control System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Enter the product name ");
     scanf("%s",tna);
     strupr(tna);
     fp=fopen("prod.dat","r");
     if(fp==NULL)
     {
     	printf("Unable to open the file");
     	return;
	 }

     heading();
     while((fread(&p,sizeof(p),1,fp)))
     {
          if (strcmpi(tna,p.name)==0)
          {
               z=1;
               //printf("%d %s %f %f %f\n",p.pno,p.name,p.rate,p.qty,p.cost);
               printf("%10d %20s %15.2f %15.2f %15.2f\n",p.pno,p.name,p.rate,p.qty,p.cost);
          }
     }
     fclose(fp);
     if (z==0)
          printf("record is not present\n");
     else
          line();
     
}
void product_delete_pno()
{
     FILE *fp,*tfp;
     struct product p;
     int z,tn;
     z=0;
     printf("\n\n");
     printf("%55s","Inventory Control System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Enter the product number ");
     scanf("%d",&tn);
     fp=fopen("prod.dat","r");
     tfp=fopen("temp","w");
     heading();
     while((fread(&p,sizeof(p),1,fp)))
     {
          if (tn==p.pno)
          {
               z=1;
               //printf("%d %s %f %f %f\n",p.pno,p.name,p.rate,p.qty,p.cost);
               printf("%10d %20s %15.2f %15.2f %15.2f\n",p.pno,p.name,p.rate,p.qty,p.cost);
          }
          else
          fwrite(&p,sizeof(p),1,tfp);
     }
     fclose(fp);
     fclose(tfp);
     if (z==0)
          printf("record is not present\n");
     else
     {
          line();
          remove("prod.dat");
          rename("temp","prod.dat");
     }
}
void product_delete_pname()
{
     FILE *fp,*tfp;
     struct product p;
     int z;
     char tna[20];
     z=0;
     printf("\n\n");
     printf("%55s","Inventory Control System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Enter the Name of the product ");
     scanf("%s",tna);
     strupr(tna);
     fp=fopen("prod.dat","r");
     tfp=fopen("temp","w");
     while((fread(&p,sizeof(p),1,fp)))
     {
          if (strcmp(tna,p.name)==0)
          {
               z=1;
               //printf("%d %s %f %f %f\n",p.pno,p.name,p.rate,p.qty,p.cost);
               printf("%10d %20s %15.2f %15.2f %15.2f\n",p.pno,p.name,p.rate,p.qty,p.cost);
          }
          else
               fwrite(&p,sizeof(p),1,tfp);
     }
     fclose(fp);
     fclose(tfp);
     if (z==0)
          printf("record is not present\n");
     else
     {
          line();
          remove("prod.dat");
          rename("temp","prod.dat");
     }
}
void product_modify_pno()
{
     FILE *fp,*tfp;
     struct product p;
     int z,tn;
     z=0;
     printf("\n");
     printf("%55s","Inventory Control System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Enter the product number ");
     scanf("%d",&tn);
     fp=fopen("prod.dat","r");
     tfp=fopen("temp","w");
     heading();
     while((fread(&p,sizeof(p),1,fp)))
     {
          if (tn==p.pno)
          {
               z=1;
               //printf("the record to be Modified is found \n");
               //printf("the contents of the record are \n");
               //printf("Pno Name Rate Qty Cost \n");
               //printf("%d %s %f %f %f\n",p.pno,p.name,p.rate,p.qty,p.cost);
               printf("%10d %20s %15.2f %15.2f %15.2f\n",p.pno,p.name,p.rate,p.qty,p.cost);
               printf("\nEnter the new details\n");
               printf("Enter the product number ");
               scanf("%d",&p.pno);
               printf("Enter the product name ");
               scanf("%s",p.name);
               strupr(p.name);
               printf("Enter the product rate ");
               scanf("%f",&p.rate);
               printf("Enter the product qty ");
               scanf("%f",&p.qty);
               p.cost=p.rate*p.qty;
          }
          fwrite(&p,sizeof(p),1,tfp);
     }
     fclose(fp);
     fclose(tfp);
     if (z==0)
          printf("record is not present\n");
     else
     {
          line();
          remove("prod.dat");
          rename("temp","prod.dat");
     }

}
void product_modify_pname()
{
     FILE *fp,*tfp;
     struct product p;
     int z;
     char tna[20];
     z=0;
     printf("\n");
     printf("%55s","Inventory Control System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Enter the Name of the product ");
     scanf("%s",tna);
     strupr(tna);
     fp=fopen("prod.dat","r");
     tfp=fopen("temp","w");
     while((fread(&p,sizeof(p),1,fp)))
     {
          if (strcmp(tna,p.name)==0)
          {
               z=1;
               //printf("the record to be Modified is found \n");
               //printf("the contents of the record are \n");
               //printf("Pno Name Rate Qty Cost \n");
               //printf("%d %s %f %f %f\n",p.pno,p.name,p.rate,p.qty,p.cost);
               printf("%10d %20s %15.2f %15.2f %15.2f\n",p.pno,p.name,p.rate,p.qty,p.cost);
               printf("\n\n Enter the new details\n");
               printf("Enter the product number ");
               scanf("%d",&p.pno);
               printf("Enter the product name");
               scanf("%s",p.name);
               strupr(p.name);
               printf("Enetr the product rate ");
               scanf("%f",&p.rate);
               printf("Enter the product qty");
               scanf("%f",&p.qty);
               p.cost=p.rate*p.qty;
          }
          fwrite(&p,sizeof(p),1,tfp);
     }
     fclose(fp);
     fclose(tfp);
     if (z==0)
     printf("record is not present\n");
     else
     {     
          line();
          remove("prod.dat");
          rename("temp","prod.dat");
     }
}
void product_random()
{
     FILE *fp;
     struct product p;
     int n,trec,reclen=0,filelen=0,z=0;
     fp=fopen("prod.dat","r");
     printf("\n");
     printf("%55s","Inventory Control System\n");
     printf("%55s","=========================\n\n");
     printf("%50s","Enter the number of the record you want to see ");
     scanf("%d",&n);
     reclen=sizeof(p);
     printf("total length of the record is %d\n",reclen);
     /* fseek command helps us to take the file pointer to a
     particular location */
     fseek(fp,0,2);
     filelen=ftell(fp);
     trec=filelen/reclen;
     printf("total length of the file is %d\n",filelen);
     printf("Total number of records are %d\n",trec);
     rewind(fp);
     if (n>0 && n<=trec)
     {
          fseek(fp,sizeof(p)*(n-1),0);
          fread(&p,sizeof(p),1,fp);
          //printf("Product number %d\n",p.pno);
          //printf("Product name %s\n",p.name);
          //printf("Rate %f\n",p.rate);
          //printf("Qty %f\n",p.qty);
          //printf("cost %f\n",p.cost);
          heading();
          printf("%10d %20s %15.2f %15.2f %15.2f\n",p.pno,p.name,p.rate,p.qty,p.cost);
          line();
     }
     else
          printf("Invalid record number is entered \n");
}
void menu()
{
          system("cls");
          system("color 0A");
          printf("\n\n\n\n");
          printf("%55s","Inventory Control System\n");
          printf("%55s","=========================\n\n");
          printf("%50s","Main Menu \n");
          printf("                              1. Add a record\n");
          printf("                              2. To display all the records \n");
          printf("                              3. to display a record by prod number \n");
          printf("                              4. to display a record by prod name \n");
          printf("                              5. delete a record by  prod number\n");
          printf("                              6. delete a record by prod name \n");
          printf("                              7. to modify a record by prod number \n");
          printf("                              8. to modify a record by prod name \n");
          printf("                              9. To display a particular record \n");
          printf("                              10. Exit \n");
          printf("                              Enter your choice ");
}
int main()
{
     int op=0;
     while(op!=10)
     {
          menu();
          scanf("%d",&op);
          system("cls");
          switch(op)
          {
               case 1:
                    add_product();
                    break;
               case 2:
                    disp_all_products();
                    break;
               case 3:
                    product_search_pno();
                    break;
               case 4:
                    product_search_pname();
                    break;
               case 5:
                    product_delete_pno();
                    break;
               case 6:
                    product_delete_pname();
                    break;
               case 7:
                    product_modify_pno();
                    break;
               case 8:
                    product_modify_pname();
                    break;
               case 9:
                    product_random();
                    break;
               case 10:
                    printf("End of the program\n");
                    break;
               default:
                    printf("Invalid option \n");
                    break;
          }
     getch();
     }
return(0);
}

