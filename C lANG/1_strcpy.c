#include <stdio.h>
#include <string.h>

void main()
{
    char c[20], d[20], t, l;
    printf("enter the string: ");
    int i = 0, k = 0;

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

    for (int j = 0; j < i; j++)
    {
        printf("%c", c[j]); //  jatin
    }

    printf("\nenter the 2nd string: ");

    while (1)
    {
        scanf("%c", &l);
        if ( l == '\n' )
        {
            break;
        }
        d[k] = l;
        k++;
    }
    d[k] = '\0';
    for (int o = 0; o < k; o++)
    {
        printf("%c", d[o]); // sahil
    }
    printf(" ");

    // printf("\n %s",strcpy(c,d));       // sahil jatin -> sahil become jatin

    int s = 0;
    for (int x = i, s = 0; x < '\n'; x++, s++)
    {
        c[x] = d[s];
    }

    printf("\n");
    
    for (int x = i; x < '\n'; x++)
    {
        printf("%c", c[x]); //   sahil jatin -> jatin
    }
}