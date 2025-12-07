//wap to perform Queue's all operation by using Linklist approach 
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *front=NULL,*rear=NULL;

void enqueue(int x){
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;

    if(rear==NULL){
        front=rear=newnode;
        return;
    }
    rear->next=newnode;
    rear=newnode;

}
int dequeue(){
    if(front==NULL){
        printf("Queue Underflow\n");
        return -1;
    }
    struct Node *temp=front;
    int val=temp->data;
    front =front->next;
    if(front==NULL){
        rear=NULL;
    }
    free(temp);
    return val;
}
int main(){
    
}