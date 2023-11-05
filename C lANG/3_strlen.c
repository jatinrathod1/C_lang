#include<stdio.h>

void main(){
    char a[10],t;
    printf("enter the string: ");
    int b=0,j,f;
    
    while (1)
    {
            scanf("%c",&t);
            if (t == '\n')
            {
                break;
            }
            a[b] = t;
            b++;
    }
    
    for ( j = 0; j < b; j++)
    {
        printf("%c",a[j]);

    }
    printf("\n length is : %d",j);   
    // int s=0;
    // for (int i = 0,s=0; i < '\n'; i++,s++)
    // {
    //    f=a[b]; 
    // }
    // printf("\nThe length is : %d",f);

}