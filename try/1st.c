//insertion at bigging
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=NULL,*newnode,*temp;
    int i,n,value;
    printf("Enter the no.of Node:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the Node data:");
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
    //insertion
    struct Node *insert;
    insert=(struct Node*)malloc(sizeof(struct Node));
    
    int newval;
    printf("Enter data for new node:");
    scanf("%d",&newval);
    insert->data=newval;
    
    insert->next=head;
    head=insert;

    //traversion
    printf("Traversion after insertion....\n");
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}