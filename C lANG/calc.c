#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,c,d,e,f;
    
    printf("enter the first num: ");
    scanf("%d",&a);

    printf("enter the sec num: ");
    scanf("%d",&b);

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("mul%d \n", c);
    printf("sub%d \n", d);
    printf("mul%d \n", e);
    printf("div%d \n", f);
}