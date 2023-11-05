#include <stdio.h>
#include <string.h>

void main()
{
    char a[10];
    printf("enter the name: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &a[i]);
        if (a[i] == '\n')
        {
            break;
        }
    }

    printf("name is :");

    for (int j = 0; j < 10; j++)
    {
        if (a[j] == '\n')
        {
            break;
        }
        printf("%c", a[j]);
    }
}
