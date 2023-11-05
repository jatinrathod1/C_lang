#include <stdio.h>
#include <string.h>

void main()
{
    char c[15], d[15], t, l, z, y;
    printf("enter the 1st string: ");
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
    printf("enter the 2nd string: ");
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

    int j = i, s = 0;
    for (j = i; s < k; j++, s++)
    {
        c[j] = d[s];
    }
   // c[j] = '\0';
   // printf("\n%d %s", strlen(c), c);
    
    for (j = i,s=0; j < k ; j++,s++)
    {
        printf("%c", c[j]);
    }
    
}