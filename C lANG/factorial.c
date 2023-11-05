#include<stdio.h>

void main(){

    int num, a,fact=1,i=1; 
    printf("enter num: ");
    scanf("%d",&num);

    while (i<=num)
    {
        fact = fact * i;
        i++;
    }
    printf("fact is %d",fact);
}