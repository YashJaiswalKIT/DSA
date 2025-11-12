#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next; 
};
int main(){
    struct Node *head=NULL,*temp,*newnode;
    int i,n,value;
    printf("Enter the number of node:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value:");
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
    //insertion at the given noede
    struct Node *insert;
    insert=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data.of newnode:");
    scanf("%d",&insert->data);
    int val;

    printf("Enter the which data where you want to insret");
    scanf("%d",&val);

    temp=head;
    while (temp!= NULL && temp->data!=val)
    {
        temp=temp->next;
    }
    

    if(temp==NULL){
        printf("data is not found...");
    }
    else{
        insert->next=temp->next;
        temp->next=insert;//add ing node
        printf("Nodes insertion successfully..\n");
    }
    //traversion
    temp=head;
    printf("after the insertion in Node");
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    

return 0;

}


// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node *next;
// };
// int main(){
//     struct Node *head=NULL,*newnode,*temp;
//     int i,n,value;
//     printf("Enter the number of nodes:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         newnode=(struct Node*)malloc(sizeof(struct Node));
//         printf("Enter the data of nodes:");
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
//     //insertion Node
//     struct Node *insert;
//     insert=(struct Node*)malloc(sizeof(struct Node));
//     printf("Enter the data of new node:");
//     scanf("%d",&insert->data);

//     int val;
//     printf("Enter the node value where you want ot insert:");
//     scanf("%d",&val);

//     temp=head;
//     while(temp !=NULL && temp->data != val){
//         temp=temp->next;
//     }
//     if(head==NULL){
//         printf("Linked list is empty");
//     }
//     else{
//         insert->next=temp->next; 
//         temp->next=insert;
//         printf("Nodes insertion successfully..\n");
//     }
//     //traversion
//     temp=head;
//     while (temp!=NULL)
//     {
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
//     printf("NULL\n");
    
    
// return 0;
// }
