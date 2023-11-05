#include<stdio.h>

void main(){
    char c[10],t;
    printf("enter str: ");
    int i=0;
    while (1) 
    {
        scanf("%c",&t);
        if (t == '\n')
        {
            break;
        }
        c[i]=t;
        i++;
        
    }
    // printf("before %c",c[0]); 
    int j=0;
    while (j<=i)
    {
        printf("%c",c[j]);
        j++;
    }

}

// str na fun inbuilt method no use krya vagar fun = 5
