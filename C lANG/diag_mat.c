#include <stdio.h>

void main()
{
    int a[4][4], i, j, k, s=0;

    printf("enter the num: ");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            {
                scanf("%d", &a[i][j]);
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
                s = s + a[i][j];
            }
        }
    }
    printf("\nsum is : %d", s);
}