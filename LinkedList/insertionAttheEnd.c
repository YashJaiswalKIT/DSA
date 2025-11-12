//insertion at the end in singly linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head=NULL,*newnode,*temp;
    int i,value,n;
    printf("Enter the no.of node:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the value of Node:");
        scanf("%d",&value);
        newnode=(struct Node*)malloc(sizeof(struct Node));
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
    //insertion at the end
    struct Node *insert;
    insert=(struct Node*)malloc(sizeof(struct Node));
    int val;
    newnode->next=insert;
    printf("Enter the data of new node:");
    scanf("%d",&val);
    insert->data=val;
    insert->next=NULL;
    //traversion
    temp=head;
    while (temp!=NULL)
    {
       printf("%d ->",temp->data);
       temp=temp->next;
    }
    printf("NULL\n");
    
    
    return 0;
}


// //with using function

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *next
// };
// void creation(int n){
//     struct Node *head=NULL,*temp,*newnode;
//     int i,value;
//     for(i=0;i<n;i++){
//         newnode=(struct Node*)malloc(sizeof(struct Node));
//         printf("Enter the data of Node:");
//         scanf("%d",&value);
//         newnode->data=value;
//         newnode->next=NULL;

//         if(head==NULL){
//             head=newnode;
//             temp=head;
//         }
//         else{
//             temp->next=newnode;
//             temp=newnode;
//         }
//     }
// }

// void insertionAtEnd(struct Node *newnode){
//     struct Node *insert ;

//     int newvalue;
//     insert=(struct Node*)malloc(sizeof(struct Node));
//     printf("Enter the value of new node:");
//     scanf("%d",&newvalue);
//     insert->data=newvalue;
//     insert->next=NULL;
//     newnode->next=insert;   
// }
// void traversion(struct Node *head){
//     struct *temp;
//     temp=head;
//     while (temp!=NULL)
//     {
//         printf("%d ->",temp->data);
//         temp=temp->next;
//     }
    
    
// }
// int main(){

// }