#include<stdio.h>

void main(){
    int n,n1=0,n2=1,n3,i;

    printf("enter num: ");
    scanf("%d",&n);

    printf("1st=%d 2nd=%d",n1,n2);

    for (int i = 2; i < n; i++)
    {
        n3=n1+n2;
        printf("\n%d",n3);
        n1=n2;
        n2=n3;
    }
}    