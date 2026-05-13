/* Author: Sonali Patil
   Date: 13 may 2026
   Description: Stack implementation in C
*/

// C program to demonstrate how to implement a stack
#include <stdio.h>
#include <stdbool.h>
// Define the maximin capacity of the stack
#define MAX_SIZE 100
// Define a structure for the stack 
typedef struct{
    int arr [MAX_SIZE];
    int top;
} stack;
// Function to initialize the stack
void initialize (stack * stack){
    stack -> top = -1;
}
// Function to check if the stack is empty
bool isEmpty(stack * stack){
    return stack -> top == -1;
}
// Function to check if the stack is full
bool isFull(stack * stack){
    return stack->top >= MAX_SIZE - 1;
} 
// Function to push an element onto the stack 
void push (stack * stack,int value){
    if (isFull (stack)){
        printf("stack overflow\n");
        return;
    }
    stack -> arr[++ stack -> top]= value;
    printf("pushed %d onto the stack \n",value);
}
// Function to pop an element from the stack
int pop (stack * stack){
    if (isEmpty(stack)){
        printf("stack underflow\n");
        return -1;
    }
    int popped = stack -> arr [stack -> top];
    stack -> top --;
    printf("popped %d from the stack\n",popped);
    return popped;
}
// Function to peek the top element of the stack
int peek(stack * stack){
    if (isEmpty(stack)){
        printf("stack is empty\n");
        return -1;
    }
    return stack -> arr [stack -> top];
}
int main() {
    stack stack;
    initialize (&stack);
    push (&stack,3);
    printf("top element: %d\n",peek(&stack));
    push (&stack,5);
    printf("top element: %d\n",peek(&stack));
    push (&stack,2);
    printf("top element: %d\n",peek(&stack));
    push (&stack,8);
    printf("top element: %d\n",peek(&stack));
    while(!isEmpty(&stack)){
        printf("top element:%d\n",peek(&stack));
        printf("popped element:%d\n",pop(&stack));
    }
    return 0;
}