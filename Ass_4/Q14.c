#include <stdio.h>

int main(){
    int m = 25,n = 77;
    char c = '*';
    int *itemp;
//describe the error in each of the following statements
    m = &n;
//Type mismatch:&n is the address of n (a pointer to an integer), but m is declared as an int. Assigning a pointer to an integer variable is not valid
    itemp = m; 
//Type mismatch:itemp is declared as a pointer to an integer (int *), but m is an integer. Assigning an integer directly to a pointer is not valid
    *itemp = c;
//Type mismatch:*itemp is of type int (dereferencing a pointer to int), but c is a char. Assigning a char to an int is possible (due to implicit type conversion), but it may result in unintended behavior, especially if c contains a non-numeric character.
    *itemp = &c;
//Type mismatch: *itemp is an integer (int), but &c is the address of a char (char *). You cannot assign a pointer to an integer directly.
}