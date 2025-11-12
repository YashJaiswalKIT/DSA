
// insertion At bigging

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head,*n1,*n2,*n3,*temp;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));

    // head->next=n1;

    n1->data=12;
    n1->next=n2;

    n2->data=14;
    n2->next=n3;

    n3->data=16;
    n3->next=NULL;

    // printf("Display element before the insertion:\n");

    // temp=n1;
    // while(temp !=NULL){
    //     printf("%d->",temp->data);
    //     temp=temp->next;
    // }
    // printf("NULL\n");

    struct Node *insert;
    insert=(struct Node*)malloc(sizeof(struct Node));

    insert->data=10;
    insert->next=n1;

    printf("Display element After the insertion:(In beggining)\n");

    temp=insert;
    while(temp !=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    return 0;

}

// insertion at end

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *n1, *n2, *n3, *temp;
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));

    n1->data = 12;
    n1->next = n2;

    n2->data = 14;
    n2->next = n3;

    n3->data = 16;
    n3->next = NULL;

    // printf("Display element before the insertion:\n");

    // temp = n1;
    // while (temp != NULL)
    // {
    //     printf("%d->", temp->data);
    //     temp = temp->next;
    // }
    // printf("NULL\n");

    struct Node *insert;
    insert = (struct Node *)malloc(sizeof(struct Node));
    // last Node
    n3->next = insert;
    insert->data = 18;
    insert->next = NULL;

    printf("Display element After the insertion:(At the end)\n");

    temp = n1;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

