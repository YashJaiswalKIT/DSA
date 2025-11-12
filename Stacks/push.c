//simple push() operation in c without using function

#include<stdio.h>
#define Size 5
int main(){
    int Stack[Size];
    int top=-1;
    for (int i = 0; i < Size; i++)
    {
       if(top==Size-1){
        printf("Stack is overflow\n");
        break;
       }
       else{
        int value;
        printf("Enter the element:");
        scanf("%d",&value);
        top++;
        Stack[top]=value;
       }
    }

    printf("Traversion\n");
    for(int i=0;i<Size;i++){
        printf("%d ,",Stack[i]);
    }

    return 0;
}