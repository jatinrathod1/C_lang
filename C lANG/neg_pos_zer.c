#include<stdio.h>

void main(){
    
    int b;

    printf("enter num: ");
    scanf("%d",&b);

    if (b > 0)
    {
        printf("b is positive");
    }
    else if ( b < 0)
    {
        printf("b is negative");
    }
    else
        printf("b is zero");
}