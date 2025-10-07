// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node *next;
// };



// int main(){
//     struct Node *head=NULL,*temp,*newnode;
//     int i,n,value;
//     printf("Enter number of nodes:");
//     scanf("%d",&n);

//     for ( i = 0; i < n; i++)
//     {
//         printf("Enter data for node %d:",i+1);
//         scanf("%d",&value);

//         newnode=(struct Node*)malloc(sizeof(struct Node));
//         newnode->data=value;
//         newnode->next=NULL;

//         if (head==NULL)
//         {
//             head=newnode;
//             head->next=NULL;//circular link for single node 
//             temp=head;
//         }
//         else{
//             temp->next=newnode;
//             newnode->next=head;//last node points back to head
//             temp=newnode;
//         }  
//     }
  
   
//     printf("\n Circular linked list elements:\n");
//     if (head !=NULL)
//     {
//         temp=head;
//         do
//         {
//             printf("%d->",temp->data);
//             temp=temp->next;
//         } while (temp !=head);
//         printf("back to head \n");
        
//     }
    
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head=NULL,*temp,*newNode;
    int i,value,n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
     for ( i = 0; i < n; i++)
     {
        printf("Enter the data value of Nodes: ");
        scanf("%d",&value);

        newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=value;
        newNode->next=NULL;

        if (head==NULL)
        {
            head=newNode;
            head->next=NULL;
            temp=head;
        }
        else{
            temp->next=newNode;
            newNode->next=head;
            head=newNode;
        }
        
     }
     //traversion

    printf("Circular linked list elements:\n");
    if (head !=NULL)
    {
        temp=head;
        do
        {
            printf("%d->",temp->data);
            temp=temp->next;
        } while (temp !=head);
        printf("back to head \n");
        
    }

     
    
    return 0;
}