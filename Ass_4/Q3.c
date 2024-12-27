#include <stdio.h>

int main(){
    float x = 6.7, y = 1.2, z = 2.3;

    float *p = &x;
    printf("Value of x using pointers: %.1f\n",*p);
    p = &y;
    printf("Value of y using pointers: %.1f\n",*p);
    p = &z;
    printf("Value of x using pointers: %.1f\n",*p);
}