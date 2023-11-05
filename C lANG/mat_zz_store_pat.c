#include <stdio.h>

void main()
{
    int a[4][4], i, j, k;

    printf("enter the num: ");

    for (i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < 4; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        else
        {
            for (j = 3; j >= 0; j--)
            {
                scanf("%d", &a[i][j]);
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}