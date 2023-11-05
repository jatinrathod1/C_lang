#include<stdio.h>

int main(){
    int a=0,n;

    printf("enter num: ");
    scanf("%d",&n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            a++;
        }
    }
    
    printf("%d",a);  
    if (a == 1)
    {
        printf("\nnum is prime");
    }

    
    return 0;
}