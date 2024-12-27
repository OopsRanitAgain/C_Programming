#include <stdio.h>

int main(){
    int a=12,b=52,c=8;
    int *ptr1=&a,*ptr2=&b,*ptr3=&c;

    printf("Value of a incremented by 10 through pointer is %d\n",*ptr1+10);
    printf("Value of b incremented by 10 through pointer is %d\n",*ptr2+10);
    printf("Value of c incremented by 10 through pointer is %d\n",*ptr3+10);
}