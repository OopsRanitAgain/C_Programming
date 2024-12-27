#include <stdio.h>

int main(){
    int a = 12;
    int b = 25;
    int c =18;

    int *ptr = &a;
    printf("Value of a Pointer of incremented by 10 through pointer : %d\n",(*ptr+10) );

    ptr = &b;
    printf("Value of b Pointer of incremented by 10 through pointer : %d\n",(*ptr+10) );

    ptr = &c;
    printf("Value of c Pointer of incremented by 10 through pointer : %d\n",(*ptr+10) );
}