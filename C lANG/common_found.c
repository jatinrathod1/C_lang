#include <stdio.h>

void main()
{
    int a[] = {12, 23, 12, 23, 5, 7}, j, i,k;
    for (i = 0; i < 6; i++)
    {
        printf("\t %d", a[i]);
    }
    printf("\n         A\n");
    for (int j = 0; j < 6; j++)
    {
        printf("\n %d", a[j]);
        // if(i!=j){
        //     printf("  element is found : %d",a[j]);
        // }
    }
        a[j] = a[i];
        for (k = 0; k < 6; k++)
        {
            printf("\n %d", a[j]);
        }
}
