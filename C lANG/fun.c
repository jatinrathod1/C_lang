#include<stdio.h>

void s(){
    int a,b;

    printf("enter 1st num : ");
    scanf("%d",&a);

    printf("enter 2nd num : ");
    scanf("%d",&b);

    int c=a+b;
    printf("%d",c); 
}

void main(){
       s();
}