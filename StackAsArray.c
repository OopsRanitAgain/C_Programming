#include <stdio.h>
#include <stdlib.h>
#define maxsize 5 //pre processor

//function declaration ------
void push();
void pop();
void display();

int stack[maxsize];
int top = -1;


void main(){
	int choice;
	while(1){
		printf("\n Static Implementation of Stack");
		printf("\n 1.push");
		printf("\n 2.pop");
		printf("\n 3.display");
		
		printf("\n Enter Choice");
		scanf("\n %d",&choice);
		
		switch(choice){
			case 1: push();break;
			case 2: pop();break;
			case 3: display();break;
			case 4: exit(0);
			
			default: printf("\n Invalid Choice");
			
		}
	}
}

void push(){
	int num;
	if(top == maxsize-1){
		printf("\n Stack is Full");
		return;
	}
	printf("\n Enter Elements to be Pushed in Stack");
	scanf("%d",&num);
	top = top+1;
	stack[top] = num;
}

void pop(){
	int num;
	if(top == -1){
		printf("\n Stack is Empty");
		return;
	}
	printf("\n Elements of Stack are");
	printf("\n%d",stack[top]);
	top = top-1;
	for(int i = top;i>0;i--){
		printf("stack[%d] : %d\n",i,stack[i]);
	}
}

void display(){
	for(int i=0;i<=top;i++){
		printf("\n %d",stack[i]);
	}
}





