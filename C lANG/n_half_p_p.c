#include <stdio.h>
void main()
{
    int i, j, k;
    printf("Enter the number : ");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}