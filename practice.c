//creation and traversion of doubly linked list


// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node *next;
//     struct Node *prev;
// };

// int main(){
//     struct Node *head=NULL,*newnode,*temp;
//     int i,n,v;
//     printf("Enter the no.of node:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         newnode=(struct Node*)malloc(sizeof(struct Node));
//         printf("Enter the value of node:");
//         scanf("%d",&v);
//         newnode->data=v;
//         newnode->prev = NULL;
//         newnode->next = NULL;

//         if (head == NULL) {
//             // First node
//             head = newnode;
//             temp = newnode;
//         } else {
//             // Link new node with the previous node
//             temp->next = newnode;
//             newnode->prev = temp;
//             temp = newnode;
//         }

//     }

//     printf("Traversion forword\n");
//     temp=head;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
//     printf("NUll\n");

//     printf("Traversion backward\n");
    
//    // Move temp to the last node first
//     temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }

//     // Now traverse backward
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->prev;
//     }
//     printf("NULL\n");
    
//     return 0;
// }


//insertion at bigging in doubly linked list


// 




//insertion at end in doubly linked list


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

int main() {
    struct Node *head = NULL, *newnode, *temp;
    int n, i, v;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Creating the doubly linked list
    for (i = 0; i < n; i++) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value of node %d: ", i + 1);
        scanf("%d", &v);

        newnode->data = v;
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    // Display list forward
    printf("\nTraversal forward:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Insertion at end
    struct Node *insert;
    insert = (struct Node*)malloc(sizeof(struct Node));
    int newdata;
    printf("\nEnter the value to insert at end: ");
    scanf("%d", &newdata);
    insert->data = newdata;
    insert->prev = NULL;
    insert->next = NULL;

   if (head == NULL) {
        // If list is empty
        head = insert;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;  // Move to the last node
        }
        temp->next = insert;
        insert->prev = temp;
    }

    // Display list forward again
    printf("\nAfter insertion at end (forward):\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Display list backward
    printf("\nTraversal backward:\n");
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");

    return 0;
}