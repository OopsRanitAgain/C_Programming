#include <stdio.h>

int main(){
    float x = 25.0, y = 10.0;
    if(y != (x-10.0)){
        x = x - 10.0;
    }
    else{
        x = x/2.0;
    }

    printf("x : %f\n",x); //15.0
    printf("y : %f\n",y); //10.0
    return 0;
}