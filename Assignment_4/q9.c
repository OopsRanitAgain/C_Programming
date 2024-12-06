#include <stdio.h>

void main()
{
    int arr[] = {10, 13, 20, 33, 44};

    float arr1[] = {10.2, 13.3, 20.0, 33.3, 45.3, 89.9};

    int size1 = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < size1; i++)
    {
        printf("%u -> %d \n", arr + i, *(arr + i));
    }
    for (int i = 0; i < size2; i++)
    {
        printf("%u -> %.2f \n", arr1 + i, *(arr1 + i));
    }
}