#include <iostream>
using namespace std;
#define size 5
int Stack[size];
int top = -1;

bool isempty()
{
    return (top == -1);
    
}
bool isFull()
{
    return (top == size - 1);
    
}

void push(int n)
{
    if (isFull() )
    {
        cout << "stack  is overflow..";
    }
    else
    {
        top++;
        Stack[top] = n;
    }
}
void pop()
{
    if (isempty())
    {
        cout << "stack is underflow..\n";
    }
    else
    {
        top--;
    }
}
void peek(){
    if(isempty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack's top element:"<<Stack[top];
    }
    
}
void display()
{
    if (isempty())
    {
        cout << "Stack is empty .......\n";
    }
    else
    {
        cout << "stack's elements are:..\n";
        for (int i = 0; i <= top; i++)
        {
            cout << Stack[i] << " ";
        }
        
    }
}

int main()
{
    push(12);
    push(14);
    push(16);
    display();
    pop();
    pop();
    peek();

    return 0;
}