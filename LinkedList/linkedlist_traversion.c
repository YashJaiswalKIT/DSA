#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {       
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            
            temp->next = newNode;
            temp = newNode;
        }
    }
    printf("\nTraversal of Linked List:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}




// #include <stdio.h>
// #include <stdlib.h>

// // structure for a node
// struct Node {
//     int data;
//     struct Node *next;
// };

// int main() {
//     struct Node *n1,*n2,*n3,*temp;
//     n1=(struct Node*)malloc(sizeof(struct Node));
//     n2=(struct Node*)malloc(sizeof(struct Node));
//     n3=(struct Node*)malloc(sizeof(struct Node));
//    n1->data=12;
//    n1->next=n2;
//    n2->data=16;
//    n2->next=n3;
//    n3->data=18; 
//    n3->next=NULL;
//     int n, i;

    

//      printf("\nTraversal of Linked List:\n");
//     temp = n1;  // start from head
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");

//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>


// struct Node {
//     int data;
//     struct Node *next;
// };

// int main() {
//     struct Node *n1,*n2,*n3;

   
//     n1=(struct Node*)malloc(sizeof(struct Node));
//     n2=(struct Node*)malloc(sizeof(struct Node));
//     n3=(struct Node*)malloc(sizeof(struct Node));

    
//     n1->data = 12;
//     n1->next = n2;

//     n2->data = 16;
//     n2->next = n3;

//     n3->data = 18; 
//     n3->next = NULL;


//     printf("Traversal of Linked List:\n");

//     while (n1 != NULL) {
//         printf("%d -> ", n1->data);
//         n1 = n1->next;   
//     }
//     printf("NULL\n");

//     return 0;
// }
