//creation of linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

};

int main(){
    struct Node *n1,*n2,*n3;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));
   //it creation of node and memory allocation by using memory allocation
   n1->data=12;
   n1->next=n2;
   n2->data=16;
   n2->next=n3;
   n3->data=18; 
   n3->next=NULL;
   printf("first node'value is:\n %d",n1->data );//it prints the value of data
   printf("\n first node'address is:\n %d",n1->next);
   printf("\n second node'value is:\n %d",n2->data);
   printf("\n second node'address is:\n %d",n2->next);
   printf("\n third node'value is:\n %d",n3->data);
   printf("\n third node'addres is\n: %d",n3->next);

    return 0;
}
