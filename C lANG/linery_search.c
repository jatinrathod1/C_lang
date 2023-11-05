#include<stdio.h>

void main(){
    int a[]={34,5,76,56,38,54},n,i,j,flag=0;

    printf("enter the num: ");
    scanf("%d",&n);                 //   38

    for ( i = 0; i < 7; i++)
    {
        printf(" %d",a[i]);
    }

    for (j = 0; j < 7; j++)         //         
    {
        if( n == a[j] ){
            flag=1;
            break;
        }
    }
    (flag==1) ? printf("\nNumber is found") : printf("\nNumber is not found");
}