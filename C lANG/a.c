#include <stdio.h>
#include<math.h>

void main()
{
    int n;
    float sum=0;
    int i,j,d=0,r;
    i=n=153;
    while (n!=0)
    {
        n=n/10;        
        d++;
        // printf("Yes");
    }

    n=i;
    while (n>0)
    {
        r=n%10;
        sum=sum+pow(r,d);
        n=n/10;
    }
    printf("%0.f",sum);
    
    

      
    

}