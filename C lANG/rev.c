#include <stdio.h>

void main()
{

    int a, b, n, i, rem, rev;

    printf("Enter the number");
    scanf("%d", &n);                    // 123 = 321

    for (i = 0; i < 3; i++)
    {
        rem = n % 10;                  // 123 = 3  2  1
        n = n / 10;
        rev = rem;
    }

    printf("%d",rev);
}