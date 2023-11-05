#include<stdio.h>

void main(){
    char a[10],t;
    int b=0,i;
    printf("enter str : ");
    while (1)
    {
        scanf("%c",&t);  // J A T I N
        if (t=='\n')
        {
            break;
        }
        a[b]=t;       
        b++;
    }
    a[b]='\0';
    // printf("%s\n",a);
    
    for ( i = 0; i < b; i++)
    {
        a[i]=a[i]-32;
        printf("%c",a[i]);
    }

    for( i = 0; i < b; i++)
    {
        if (a[i]>=90)
        {
            printf("%c",a[i]-32);
        }else{
            printf("%c",a[i]);
        }
    }
    
    printf("\n---%s",a);
}