#include <stdio.h>
int main(){
    float x = 25.0,y = 10.0;
    if(y < 15.0)
        if(y >= 0.0)
            x = 5*y;
        
        else
            x = 2*y;
        
    
    else
        x = 3*y;
    

    printf("x : %f\n",x); //50.0
    printf("y : %f\n",y); //10.0
    return 0;
}