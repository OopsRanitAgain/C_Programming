#include <stdio.h>

int main(){

    int size = 5;
    int mid = (size/2)+1;

    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){
            if(i==mid || j==mid){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}