#include <stdio.h>

int main(){
    int ia = 345;
    float fb = 4.5;
    char chvar = 'Z';

    printf("The value and Address of ia is %d and %p respectively\n",ia,&ia);
    printf("The value and Address of ia is %.1f and %p respectively\n",fb,&fb);
    printf("The value and Address of ia is %c and %p respectively\n",chvar,&chvar);
}