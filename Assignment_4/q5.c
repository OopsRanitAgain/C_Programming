#include <stdio.h>

void main()
{
    int a = 12, b = 25, c = 18;

    int *p = &a;
    *p += 10;

    *(&b) += 10;

    *(&c) += 10;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}
