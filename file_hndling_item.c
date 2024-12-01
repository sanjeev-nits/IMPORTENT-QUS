#include<stdio.h>

void main()
{
FILE *fp;

int number,quantity;
float price,value;
char item[10];

fp=fopen("INVOLETERY","w");

int i;
for(i=0;i<3;i++)
{
printf("itemname  number Price Quantity  \n");
    fscanf(stdin,"%s%d %f %d",item,&number,&price,&quantity);
    fprintf(fp,"%s %d %f %d ",item,number,price,quantity);

}
fclose(fp);

printf("itemname  number Price Quantity  value  \n");
fp=fopen("INVOLETERY","r");
for(i=0;i<3;i++)
{
    fscanf(fp,"%s %d %f %d",item,&number,&price,&quantity);
    value=price*quantity;

    fprintf(stdout,"%s  %d  %f  %d  %.2f \n",item,number,price,quantity,value);



}
fclose(fp);

}