#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        char ch = 'A';
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",ch);
                ch = ch+1;
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}