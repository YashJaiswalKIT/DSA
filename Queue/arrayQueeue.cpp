#include<iostream>
using namespace std;

#define Size 5
int Queue[Size];
int front =-1,rear=-1;

bool IsEmpty(){
    return (front==-1);
}
bool IsFull(){
    return (rear == Size-1);
}
void Enqueue(int value){
    if(IsFull()){
        cout<<"Queue is Overflow"<<endl;
    }else{
        if(front== -1)front=0;
        Queue[++rear]=value;
    }
}

void DeQueue(){
    if(IsEmpty()){
        cout<<"Queue is Underflow"<<endl;
    }
    else{
        int val=Queue[front];
        if(front== rear){
            front=rear=-1;
        }else{
            front ++;
        }
    }
}

void display(){
    if(IsEmpty()){
        cout<<"Stack is Empty..\n";
    }
    else{
        for (int i =  front; i <= rear; i++)
        {
            cout<<Queue[i];
        }
        
    }
}
int main(){
    Enqueue(12);
    Enqueue(14);
    Enqueue(16);
    Enqueue(17);
    display();
    DeQueue();
    display();
    
    return 0;
}