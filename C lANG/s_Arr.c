#include<stdio.h>

void main(){
    int a[10],n;

    printf("YOU WANT MANY TIME");
    scanf("%D",&n);

    printf("TIME");

    for (int j = 0; j < n; j++)
    {
        scanf("%d",&a[j]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
}