#include<stdio.h>

void main(){
    char c[10],d[10],t,l;
    int r=0,s=0;
    printf("enter the 1st string: ");   
    int i=0,k=0;
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
    for (int j = 0; j < i; j++)
    {
        printf("%c",c[j]);
        
    }
    
    printf(" \n");  

    printf("enter the 2nd string: ");   
    while (1)
    {
        scanf("%c",&l);
        if (l == '\n')
        {
            break;
        }
        d[k]=l;
        k++;
    }
    
    for (int m=0; m < k; m++)
    {
        printf("%c",d[m]);
        
    }
  
//    for (int z = 0; i < k; i++)
//    {
//         c[i]=d[k];
//    }
   if (d[k]==c[i])
   {
        printf("\n equal");
   }
      else if ( c[i] >= d[k] )
        {
            printf("\n 1st is bigger");
        }
        else
            printf("\n 2nd is bigger");
    }
