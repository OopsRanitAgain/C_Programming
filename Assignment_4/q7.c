#include <stdio.h>

void main()
{
    int a = 52, b = 18;
    int *ptr1 = &a, *ptr2 = &b;

    if (*ptr1 > *ptr2)
        printf("The value of a is greater than b\n");
    else
        printf("The value of b is greater than a\n");
}
