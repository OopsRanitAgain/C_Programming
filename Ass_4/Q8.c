#include <stdio.h>

int main(){
    int a[10] = {0,10,20,30,40,50,60,70,80,90};

    for(int i=0;i<10;i++){
        printf("Address and value of a[%d] is %p and %d respectively.\n",i,&a[i],a[i]);
    }
}