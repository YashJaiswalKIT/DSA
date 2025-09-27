#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prew;
};

void display(){
    struct Node *n1,*n2,*n3;

    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));

    n1->data=23;
    n1->next=n2;
    n1->prew=NULL;

    n2->data=34;
    n2->next=n3;
    n2->prew=NULL;

    n3->data=45;
    n3->next=NULL;
    n3->prew=n2;
}
void traversion(){
    
    
}