//representation of Dubly linkedlist

// Doubly linked list:-in the doubly linked list we can traversion both side forward  or backward both
//structure of Doubly linked list

// NULL->[12|*|*]<->[14|*|*]<->[15|*|*]

// a node stroe two address 1st is next node address and second address is previous node's addresss


//declearation of Doubly Nodes

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;

};



int main(){
    struct Node *n1,*n2,*n3 ,*temp;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));

    n1->data=12;
    n1->next=n2;
    n1->prev=NULL;

    n2->data=18;
    n2->next=n3;
    n2->prev=n1;

    n3->data=24;
    n3->next=NULL;
    n3->prev=n2;

    printf("Forward traversion: \n");
    temp=n1;
    while (temp!=NULL)
    {
       printf("%d ->",temp->data);
       temp=temp->next;
    }
    printf("NULL\n");
    printf("Backward traversion: \n");
     
    temp=n3;
    while (temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->prev;

    }
    printf("NULL\n");  
    return 0;
}