#include <stdio.h>
#include<math.h>

void main()
{

    int i, j, k, h,n,c,r, d = 0;
    float s = 0;

    printf("enter the num: ");
    scanf("%d", &n);

    c=n;
    h=n; 

    while (c > 0)           // XXXXXXXX
    {
        c = c / 10;        // 153 0 , 15 1, 1 2,   
        d++;
    }
    printf("\ndigit is %d", d);

    for ( i = 0; i <= d; i++)
    {
        r = n % 10;               // 153 = 3 , 5 , 1 , 
        s = s + pow (r , d);     //          
        n = n / 10;             //   153 = 15 , 1 , 0   
    }
    
    printf("\ntemp %d-num is get %d",h,n);
    printf("\nsum is : %0.2f",s);          // 153 = 1^3 + 5^3 + 3^3
    
    if ( s == h)
    {
        printf("\n%0.2f number is armstrong",s);
    }
    else
        printf("\n%0.f number is not armstrong",s);
}