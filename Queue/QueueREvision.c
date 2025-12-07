#include<stdio.h>
#define Size 5
int front=-1,rear=-1;
int Queue[Size];

void enqueue(int value){
    if(rear==Size-1){
        printf("Queue is Overflow");
    }else{
        if (front== -1)front=0;
        Queue[++rear]=value;
    }
}
void dequeue(){
    if(front==-1){
        printf("Queue is Underflow");
    }
    if(front==rear){
        front=rear=-1;
    }
    else{
        front ++;
    }
}

int main(){
    
    return 0;
}