#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* creation(struct Node *head, int val){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
    } 
    else {
        struct Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }

    return head;
}

void display(struct Node *head){
    struct Node *temp = head;
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct Node *head = NULL;

    head = creation(head, 12);
    head = creation(head, 14);
    head = creation(head, 16);

    display(head);

    return 0;
}
