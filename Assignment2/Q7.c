#include <stdio.h>

int main(){
    printf("Enter Student's mark :");
    int mark;
    scanf("%d",&mark);

    if(mark > 100 ||mark < 0){
        printf("Invalid Marks");
        return 0;
    }

    switch(mark/10){
        case 10: if(mark > 100){
            printf("Invalid Mark\n");
        }
        else{
            printf("Grade : O\n");
        }
        break;
        case 9: if(mark>=95){
            printf("Grade : O\n");
        }else{
            printf("Grade : A\n");
        }
        break;
        case 8: if(mark>=81){
            printf("Grade : A\n");
        }else{
            printf("Grade : B\n");
        }
        break;
        case 7: if(mark>=71){
            printf("Grade : B\n");
        }else{
            printf("Grade : C\n");
        }
        break;
        case 6: if(mark>=61){
            printf("Grade : C\n");
        }else{
            printf("Grade : D\n");
        }
        break;
        case 5: if(mark>=51){
            printf("Grade : D\n");
        }else{
            printf("Grade : E\n");
        }
        break;
        case 4: printf("Grade : E\n");break;

        default: printf("Grade: F\n");break;

    }
}