#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *n1,*n2,*n3;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));

    n1->data=12;
    n1->next=n2;
    n2->data=13;
    n2->next=n3;
    n3->data=14;
    n3->next=NULL;

    struct Node *temp=n1;
    printf("Traversal:\n");
    while (temp != NULL)
    {
       printf("%d ->",temp->data);
       temp=temp->next;
    }
    
return 0;

}