#include <stdio.h>

int main(){
    int a=55,b=105,c=89,d=68;
    int *ptr[] = {&a,&b,&c,&d};

    int maxVar = *ptr[0];
    for(int i=1;i<4;i++){
        if(maxVar<*ptr[i]){
            maxVar = *ptr[i];
        }
    }
    printf("The maximum value among a, b, c, and d is: %d\n", maxVar);
}