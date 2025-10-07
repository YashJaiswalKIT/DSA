#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *n1,*head;

    n1=(struct Node*)malloc(sizeof(struct Node));
    n1->data=12;
    n1->next=NULL;
    head=n1;

    //decleration new node for insertion
    struct Node *n2;
    n2=(struct Node*)malloc(sizeof(struct Node));
    n2->data=14;
    n2->next=head;
    head=n2;

    //traversion
    struct Node *temp;
    temp=n2;
    while (temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL \n");
    

    
    return 0;
}