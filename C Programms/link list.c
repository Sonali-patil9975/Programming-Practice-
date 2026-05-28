/* Author: Sonali patil
   Date: 27 May 2026
   this program is to link list in C
*/

// This program links list in C
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* Next;
};
    
    //Function to insert at head
    void insertAtHead (struct Node **head, int val){
        struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=val;
        newNode->Next=*head;
        *head=newNode;
    }
    //Function to traverse and print the list
    void printList(struct Node* head){
        while (head != NULL){
            printf("%d->",head->data);
            head=head->Next;
        }
        printf("NULL\n");
    }

int main() {
    struct Node*head=NULL;
    insertAtHead(&head,30);
    insertAtHead(&head,20);
    insertAtHead(&head,10);
    printList(head); 
    return 0;
}