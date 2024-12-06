#include <stdio.h>

void main()
{
    int arr[10] = {0, 10, 20,
                   30, 40, 50,
                   60, 70, 80,
                   90};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%u -> %d\n", &arr[i], arr[i]);
    }
}