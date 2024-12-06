#include <stdio.h>

void main()
{
    int a[4], b[4], c[4], d[4], sumarray[4];

    int *pa = a, *pb = b, *pc = c, *pd = d, *ps = sumarray;

    printf("Enter values for array a (4 elements):\n");
    for (int i = 0; i < 4; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", pa + i);
    }

    printf("Enter values for array b (4 elements):\n");
    for (int i = 0; i < 4; i++)
    {
        printf("b[%d]: ", i);
        scanf("%d", pb + i);
    }

    printf("Enter values for array c (4 elements):\n");
    for (int i = 0; i < 4; i++)
    {
        printf("c[%d]: ", i);
        scanf("%d", pc + i);
    }

    printf("Enter values for array d (4 elements):\n");
    for (int i = 0; i < 4; i++)
    {
        printf("d[%d]: ", i);
        scanf("%d", pd + i);
    }

    for (int i = 0; i < 4; i++)
    {
        *(ps + i) = *(pa + i) + *(pb + i) + *(pc + i) + *(pd + i);
    }

    printf("\nElement-wise sum of arrays a, b, c, and d:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("sumarray[%d]: %d\n", i, *(ps + i));
    }
}
