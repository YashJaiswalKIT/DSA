#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}
void creation(int n){
    struct Node *head=NULL,*newnode,*temp;
    int i,value;
    for ( i = 0; i < n; i++)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value :");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
}



int main(){
    
    return 0;
}