// wap to perform circular Queue

#include<stdio.h>
#define Size 5

int cqueue[Size];
int front=-1,rear=-1;
void enqueue(int val){
    if((rear +1)%Size==front){
        printf("Overflow\n");
        return;
    }
    if(front==-1){
        front++;
    }
    else{
        rear =(rear+1)%Size;
        cqueue[rear]=val;
    }
}
void dequeue(){
    if(front == -1){
        printf("Queue is underflow..\n");
        return -1;
    }
    int val=cqueue[front];
    if(front == rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%Size;
    }     
return val;
}
void display(){
    if(front==-1 || front>rear){
        printf("Queue is empty..");
        return -1;
    }
    else{
        for (int i = front; i <= rear; i++)
        {
          printf("%d ",cqueue[i]);
        }
        
    }
}

int main(){
    enqueue(12);
    enqueue(14);
    enqueue(16);

    display();
    dequeue();
    display();

}