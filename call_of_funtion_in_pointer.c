#include<stdio.h>
int swap(int*,int*);

int main(){

    int x=23,y=6;

    printf("before swaping x=%d  y=%d",x,y);

    swap(&x,&y);

    printf("after swaping x=%d  y=%d",x,y);
    return 0;
}
int swap(int *a,int*b)
{
    int t;

    t=*a;
    *a=*b;
    *b=t;
}