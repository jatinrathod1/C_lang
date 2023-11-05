#include<stdio.h>
    
void main(){
    int a,b,j,t;

    printf("enter the 1st num: ");
    scanf("%d",&a);

    printf("enter the 2nd num: ");
    scanf("%d",&b);

        t=a;
        a=b;
        b=t;
    printf("1=%d",a);
    printf("\n2=%d",b);
}    