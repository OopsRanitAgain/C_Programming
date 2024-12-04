#include <stdio.h>

int main(){
    double x;
    printf("Enter the value of X : ");
    scanf("%lf",&x);

    if(x <= 0){
        printf("Enter Non-Negative Number. X can't be Zero...");
        return 1;
    }
    double firstTerm = (x-1)/x;
    double sum = firstTerm;
    double term;

    for(int i=2;i<=9;i++){
        term = 0.5*pow(firstTerm,i);
        sum += term;
    }

    printf("The Sum of the 1st Nine numbers is : %.9lf \n",sum);
}