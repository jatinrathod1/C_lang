#include<stdio.h>

void main(){
    int a[5];

    //ip
    int *ptr = &a[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d",i);
        scanf("%d",(ptr+i));         // &a[i]
    }

    //op
    for (int j = 0; j < 5; j++)
    {
        printf("%d-s\n%d=",j,*(ptr+j));    // a[i]
    }
    
    
}