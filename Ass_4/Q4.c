#include <stdio.h>

int main(){
    int x = 89;
    int *p1 = &x, *p2 = &x, *p3 = &x;

    printf("Value of x is : %d\n",*p1);

    *p3 = 100;
    printf("Value of x is : %d\n",x);
}