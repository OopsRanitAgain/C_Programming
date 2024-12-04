#include <stdio.h>

int main(){
    int i = 2;
    switch(i){
        default:printf("Hello");
        case 1:printf("1Hello");
        case 2:
        case 3:printf("3Hello");
        case 4:printf("4Hello");
    }
}

//There is no break statement so The Switch Fall through the after the Matched Case
// In This Case the match case 2 as i=2 so it will print both case3 and case4