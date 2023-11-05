#include <stdio.h>
void main()
{
    int i, j, k;
    char c;

    printf("Enter the character : ");
    scanf("%c", &k);

    for (i = 1; i <= k; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
}