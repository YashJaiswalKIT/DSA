// wap to implementation of queue by usng array aproach with using function

#include <stdio.h>
#define Size 5

int Queue[Size];
int front = -1, rear = -1;

void enquee(int x){
    if(rear==Size-1){
        printf("Is overflow");
        return;
    }
    if(front==-1){
        front=0;
    } 
    
    Queue[++rear]=x;
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("Is undeflow");
        return;
    }
    Queue[front++];

    if (front > rear) {
        front = rear = -1;
    }
}
void display(){
    if(front==-1 || front>rear){
        printf("Queue is empty..");
        return;
    }
    else{
        for (int i = front; i <= rear; i++)
        {
          printf("%d ",Queue[i]);
        }
        
    }
}
int main(){
    enquee(12);
    enquee(14);
    enquee(16);
    display();
    printf("\n");
    dequeue();
    display();
    return 0;
}