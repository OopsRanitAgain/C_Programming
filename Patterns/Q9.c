#include <stdio.h>

int main(){
    for(int i=0;i<4;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++){
            printf("%c ",ch);
            ch = ch+1;
        }
        printf("\n");
    }
}