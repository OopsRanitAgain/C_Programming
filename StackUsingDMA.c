#include<stdio.h>
#include<stdlib.h>

int *stack;
int top = -1;
int maxsize;

//function declaration

void push(int data);
int pop();
void display();
void stackResize(int ns);//ns -> new size

int main(){
	int choice,data;
	
	printf("Enter the size of Stack \n");
	scanf("%d",&maxsize);
	stack = (int*)malloc(maxsize * sizeof(int));
	if (stack == NULL){
		printf("Memory allocation failed");
		return -1;
	}
	while(1){
		printf("Dynamic Implementation of Stack");
		printf("\n--------------------------------------------------------\n");
		printf("\n 1 . push\n");
		printf("\n 2 . pop\n");
		printf("\n 3 . display\n");
		printf("\n 4 . Exit\n");
		printf("Enter your choice \n");
		scanf("%d" , &choice);
		printf("\n--------------------------------------------------------\n");
		switch(choice){
			case 1:
				printf("Enter the element to be pushed\n");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				data = pop();
				if(data !=-1){
					printf("Popped out data %d\n",data);
				}
				break;
			case 3:
				display();
				break;
				
			case 4:
				free(stack);
				exit(0);
				break;
				
			default:
				printf("Invaid. Try again\n");
		}
	}
	return 0;
}
// push function
void push(int data){

	if(top == maxsize-1){
		printf("Stack OverFlow\n");
		stackResize( maxsize*2);
	}
	top+=1;
	stack[top] = data; 

}

//pop operation

int pop(){
	if(top == -1){
		printf("Stack underflow\n");
		return -1;
		
	}
	int val = stack[top];
	top-=1;
	return val;
}

//stack resize

void stackResize(int ns){
	stack = (int*)realloc(stack,ns*sizeof(int));
	if(stack == NULL){
		printf("memory allocation failure\n");
		//exit(1);
		return;
	}
	maxsize = ns;
	
}
//display
void display(){
	if(top == -1){
		printf("Stack is empty\n");
		return;
	}
	printf("stack elements \n");
	for(int i = top ;i>=0;i--){
		printf("%d\n",stack[i]);
	}
	
}


