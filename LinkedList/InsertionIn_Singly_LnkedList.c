// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// int main(){
//     struct Node *n1,*head=NULL;
//     n1=(struct Node*)malloc(sizeof(struct Node));
//     n1->data=14;
//     n1->next=head;
//     head=n1;

//     //creation new node and insert at the bigging

//     struct Node *newnode;
//     newnode=(struct Node*)malloc(sizeof(struct Node));
//     newnode->data=12;
//     newnode->next=n1;
//     head=newnode;

//     //traversion after insertion
//  struct Node *temp;
//     temp=newnode;
//     while (temp!=NULL)
//     {
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
//     printf("NULL \n");
    
//     return 0;
// }




// //insertion at the end

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head=NULL,*newnode ,*temp;
    int i,n,value;
    printf("Enter the number of node:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the value:");
        scanf("%d",&value);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=value;
        newnode->next=NULL;
        
        if (head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }

    //traversion before insertion
    
    temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
  printf("NULL\n");
    
    //insertion

    struct Node *insertNode;
    insertNode=(struct Node*)malloc(sizeof(struct Node));
    int newvalue;
    printf("Enter the New NOdes data which you want to insert:");
    scanf("%d",&newvalue);
    insertNode->data=newvalue;
    insertNode->next=head;
    head=insertNode;

    //traversion after insertion
    
    temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
  printf("NULL\n");
    
    
    
    return 0;
}