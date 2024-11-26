#include <stdio.h>

void main() {
    FILE *f1,*f2,*f3;
    int i, a, num;

    f1 = fopen("DATA", "w");
    f2 = fopen("EVEN", "w");
    f3 = fopen("ODD", "w");

    printf("Enter the data:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a);
        putw(a, f1);
    }
    fclose(f1); 
    f1 = fopen("DATA", "r");
    printf("\nData from the file:\n");

    for (i = 0; i < 10; i++) {
        num = getw(f1);
        if (num%2==0){
        putw(num,f2);
        }

        else{
            putw(num,f3);
        }
        printf("%d ", num);  
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2=fopen("EVEN","r");
    f3=fopen("ODD","r");

    printf("\nEven number are : \n");

    while((num=getw(f2))!=EOF){
        printf("%d  ",num);
         }
fclose(f2);
    printf("\nODD number are : \n");

    while((num=getw(f3))!=EOF){
        printf("%d  ",num);
         }
fclose(f3);

}
