#include<stdio.h>

void main(){
    char c[10],t;
    printf("enter the string: ");
    int i=0;
    
   while(1)
    {
        scanf("%c",&t);
        if ( t == '\n')
        {
            break;
        }
        c[i] = t;     
        i++;   
    }
    
    int j=0;
    for (j = i; j >= 0; j--)
    {
        printf("%c",c[j]);
    }

}