/*Author: Sonali Patil
    date: 18 May 2026   
    this program is to implement a queue data structure in C
*/

// c program to demostrate how to implement a queue
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
//definig the queue structure
typedef struct
{
    int items[MAX_SIZE];
    int front;
    int rear;
}Queue;
//function to initialize the queue 
void initilizeQueue(Queue * q){
    q->front = -1;
    q->rear = 0;
}
//function to check if the queue is empty 
bool isEmpty(Queue *q)
{
    return(q->front == q->rear-1);
}
//function to check if the queue is full
bool isFull(Queue *q)
{
    return(q->rear == MAX_SIZE);
}
// Function to add an element to the queue (Enqueue
// operation)
void enqueue(Queue *q, int value)
{
    
    if(isFull(q)){
        printf("Queue is full\n");
        return;
    }
    q->items[q->rear]=value;
    q->rear++;
}
// Function to remove an element from the queue(Dequeue
//Operation)
void dequeue(Queue*q)
{
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return;
    }
    q->front++;
}
//Function to get the element at the front of the queue
//(peek operation)
int peek(Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        return -1;//return some default value or handde
        //error differently
    }
     return (q->items[q-> front +1]);   
}
//Function to print the current queue 
void printQueue (Queue*q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    printf("current Queue:");
    for (int i=q->front +1;i<q->rear;i++) {
        printf("%d",q->items[i]);
    }
    printf("\n");
}
int main() {
    Queue q;
    initilizeQueue(&q);
    //Enqueue elements
    enqueue(&q,10);
    printQueue(&q);
    
    enqueue(&q,20);
    printQueue(&q);

    //peek front element
    printf("front element:%d\n",peek(&q));
    //Dequeue an element
    dequeue(&q);
    printQueue(&q);
    //peek front element after dequeue
    printf("front element after deque:%d\n",peek(&q));


    return 0;
}