#include <stdio.h>

void main()
{
    int rev, num, rem, i, temp;
    printf("enter num: ");
    scanf("%d", &num);

    temp = num;
    printf("%d\n", temp);
    rev = 0;
    while (temp > 0)
    {
        rem = temp % 10;      //   3 2 1
        rev = rev * 10 + rem; //   reverse logic 3 32 321
        temp = temp / 10;     //    123 = 12 1 0
    }

    printf("revrese %d", rev);
}