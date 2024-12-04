#include <stdio.h>
int main(){
    int m,n;
    int counter = 0;
    for(m=9;m>0;--m){
        for(n=6;n>1;--n){
            counter++;
            printf("%d. #########\n",counter);

        }
    }

    return 0;
}