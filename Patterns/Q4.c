#include <stdio.h>

int main(){
    for(int i=0;i<4;i++){
        for(int j=4-i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
}