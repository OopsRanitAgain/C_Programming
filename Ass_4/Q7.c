#include <stdio.h>

int main(){
    int a=52,b=18;

    int *ptr1=&a, *ptr2=&b;

    if(*ptr1 >= *ptr2){
        printf("Greater Number is %d\n",*ptr1);
    } else {
        printf("Greater Number is %d\n",*ptr2);
    }
}