// wap to perform implementation queue in array without using function(only enqueue )
//
#include <stdio.h>
#define Size 5

int main()
{
    int Queue[Size];
    int front = -1, rear = -1;
    int ele;
    
//enqueee
    for (int i = 0; i <= Size; i++)
    {
        if(rear==Size-1){
            printf("Is Overflow");
            break;
        }
        printf("Enter value to enqueue:");
        scanf("%d",&ele);
        if(front==-1){
            front++;
        }
        rear++;
        Queue[rear]=ele;
    }

    //display
    printf("\n Queue element:");
    for ( int i = front; i <= rear; i++)
    {
        printf("%d ",Queue[i]);
    }
    
return 0;

}