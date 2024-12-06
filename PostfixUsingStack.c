#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack implementation
int stack[MAX];
int top = -1;

// Function to push data onto the stack
void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = data;
}

// Function to pop data from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Function to evaluate the postfix expression
int postfix(char *exp) {
    int i;
    for (i = 0; exp[i] != '\0'; i++) {
        // If the character is a digit, push it onto the stack
        if (isdigit(exp[i])) {
            push(exp[i] - '0'); // Convert character to integer
        } else {
            // If the character is an operator, pop two elements and perform the operation
            int operand2 = pop();
            int operand1 = pop();
            switch (exp[i]) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0) {
                        printf("Division by zero error\n");
                        exit(1);
                    }
                    push(operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", exp[i]);
                    exit(1);
            }
        }
    }
    // The result is the only element left in the stack
    return pop();
}

// Main function
int main() {
    char exp[MAX];

    printf("Enter a postfix expression: ");
    scanf("%s", exp);

    int result = postfix(exp);
    printf("The result of the postfix expression is: %d\n", result);

    return 0;
}

