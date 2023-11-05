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
    
    d[k] = '\0';

    for (o = 0; o < k; o++)
    {
        printf("%c", d[o]); // sahil
    }

    printf("\nstrcat is: ");   // main function start here

    i=0;
    while ( c[i] != '\0' )
    {
        i++;
    }

    k=0;
    while ( d[k] != '\0')
    {
        c[i]=d[k];
        i++;
        k++;
    }
    c[i] = '\0'; 

    for(k=0; k < i; k++)
    printf("%c",c[k]);

}    