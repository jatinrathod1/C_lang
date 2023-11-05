#include<stdio.h>

void main(){
    int a[]={34,5,76,56,38,54},n,i,t,j,found=0;

    for ( i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if( a[j] > a[j+1] ){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }    
    }
    for (int k = 0; k < 6; k++)
    {
        printf("%d ",a[k]);
    }
    
    printf("\nEnter the num: ");
    scanf("%d",&n);
    int l=0;
    int r=5;
    int mid=(l+r)/2;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==n){
            found=1;
            break;
        }else if(n>a[mid]){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }    

    (found==1) ? printf("\n Number is found") : printf("\n Number is not found");
} 