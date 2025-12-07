#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void creation(int value){
    struct Node  *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    head=newnode;
}
void display(){
    struct Node *temp=head;
    while (temp != NULL)
    {
       printf("%d->",temp->data);
       temp=temp->next;
    }
}
int main(){
    creation(12);
    creation(14);
    creation(16);
    display();
    return 0;
}