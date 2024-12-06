#include <stdio.h>

void main()
{
    int la = 345;
    float fb = 4.5;
    char Chvar = 'Z';

    printf("The value of la is %d\n", la);
    printf("The value of fb is %f\n", fb);
    printf("The value of Chvar is %c\n", Chvar);

    printf("The address of la is %u\n", &la);
    printf("The address of fb is %u\n", &fb);
    printf("The address of Chvar is %u\n", &Chvar);
}