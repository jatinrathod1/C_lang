#include <stdio.h>

void main()
{
    char c[10], d[10], t, l;
    printf("Enter the string: ");
    int i = 0, k = 0, j, s, o, x;

    while (1)
    {
        scanf("%c", &t);
        if (t == '\n')
        {
            break;
        }
        c[i] = t;
        i++;
    }
    i++;
    c[i] = '\0';

    for (j = 0; j < i; j++)
    {
        printf("%c", c[j]);
    }

    printf("\nenter the 2nd string: ");
    while (1)
    {
        scanf("%c", &l);
        if (l == '\n')
        {
            break;
        }
        d[k] = l;
        k++;
    }
    k++;
    d[k] = '\0';

    for (o = 0; o < k; o++)
    {
        printf("%c", d[o]); // sahil
    }
    printf("\nstrcat is: ");

    j = 0;
    while (d[k] != '\0')
    {
        c[j] = d[k];
        k++;
        j++;
    }
    c[j] = '\0';

    for (k = 0; k < j; k++)
    {
        printf("%c", c[j]);
    }
}