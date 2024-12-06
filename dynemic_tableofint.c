#include<stdio.h>
#include<stdlib.h>
#define null 0

void main()
{
    int *p,*table,size;

    printf("entre the size of table");
    scanf("%d",&size);

    if((table=(int*)malloc(size *sizeof(int)))==null)
    {
        printf("No space Available \n");
        exit(0);
    }
    printf("\n Address of the first byte is %u \n",table);
    printf("entre table value \n");

    for(p=table;p<table+size;p++)
    scanf("%d",p);

    for(p=table+size-1;p>=table;p--)
    {
        printf("%d are stored at address %u\n",*p,p );
    }


}
