#include <stdio.h>

int main(){
    int a[] = {10,13,20,33,44};
    float b[] = {10.2,13.3,20.0,33.3,45.3,89.9};

    int *ptrInt = a;
    float *ptrFloat = b;

    for(int i=0;i<5;i++){
        printf("Value and Address of a[%d] is %d and %p respectively.\n",i,*(ptrInt+i),(ptrInt+i));
    }

    for(int i=0;i<5;i++){
        printf("Value and Address of b[%d] is %.1f and %p respectively.\n",i,*(ptrFloat+i),(ptrFloat+i));
    }
}