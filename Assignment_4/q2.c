#include <stdio.h>

void main()
{
    int a = 12, b = 13;

    printf("The address of a is %u\n", &a);
    printf("The address of b is %u\n", &b);

    int c;
    c = a;
    a = b;
    b = c;

    printf("The address of a is %u\n", &a);
    printf("The address of b is %u\n", &b);
}