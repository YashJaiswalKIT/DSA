#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *n1,*n2,*n3,*temp;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));

    n1->data=12;
    n1->next=n2;

    n2->data=14;
    n2->next=n3;

    n3->data=18;
    n3->next=n1;


    //traversion in circular linked list
    temp = n1;
do {
    printf("%d -> ", temp->data);
    temp = temp->next;
} while (temp != n1);
    printf("%d ",n1->data);
    
    
    return 0;
}