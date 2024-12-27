#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    int *ptrA = &a;
    printf("Address of a before swap is %p \n:",ptrA);
    int *ptrB = &b;
    printf("Address of b before swap is %p \n:",ptrB);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("After swap a and b are respectively %d and %d \n",a,b);
    printf("Address of a before swap is %p \n:",&a);
    printf("Address of b before swap is %p \n:",&b);
}