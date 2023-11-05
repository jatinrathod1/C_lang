#include<stdio.h>

void main(){

    int num, rem;
    printf("enter num: ");
    scanf("%d",num);
  
    rem = num % 10;

    if (rem % 2 == 0)
    {
        printf("\n num is odd");
    }
    else
        printf("\n num is even");

}