//deletion at middel



// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// int main() {
//     struct Node *head = NULL, *newnode, *temp;
//     int i, n, value;

//     // Create linked list
//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);

//     for (i = 0; i < n; i++) {
//         printf("Enter the value of node %d: ", i + 1);
//         scanf("%d", &value);

//         newnode = (struct Node*)malloc(sizeof(struct Node));
//         newnode->data = value;
//         newnode->next = NULL;

//         if (head == NULL) {
//             head = newnode;
//             temp = head;
//         } else {
//             temp->next = newnode;
//             temp = newnode;
//         }
//     }

//     // Display before deletion
//     printf("\nLinked List before deletion: ");
//     temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");

//     // Deletion by value
//     int val;
//     printf("\nEnter the value you want to delete: ");
//     scanf("%d", &val);

//     struct Node *prev = NULL;
//     temp = head;

//     // Search for the node to delete
//     while (temp != NULL && temp->data != val) {
//         prev = temp;
//         temp = temp->next;
//     }

//     // If node not found
//     if (temp == NULL) {
//         printf("Node with value %d not found.\n", val);
//     } else {
//         // If node to be deleted is head
//         if (temp == head) {
//             head = head->next;
//         } else {
//             prev->next = temp->next;
//         }
//         free(temp);
//         printf("Node with value %d deleted successfully.\n", val);
//     }

//     // Display after deletion
//     printf("\nLinked List after deletion: ");
//     temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");

//     return 0;
// }




      

//deletion at begging-----------



#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newnode, *temp;
    int n, i, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create linked list
    for (i = 0; i < n; i++) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL)
            head = newnode;
        else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }

    printf("\nLinked list before deletion:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Deletion at beginning
    if (head == NULL) {
        printf("\nList is empty. Nothing to delete.\n");
    } else {
        temp = head;
        head = head->next;
        printf("\nDeleted node: %d\n", temp->data);
        free(temp);
    }

    // Display after deletion
    printf("\nLinked list after deletion:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}


//deletion at end in linkedlist--------------

#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newnode, *temp, *prev;
    int n, i, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create linked list
    for (i = 0; i < n; i++) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL)
            head = newnode;
        else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }

    printf("\nLinked list before deletion:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Deletion at end
    if (head == NULL) {
        printf("\nList is empty. Nothing to delete.\n");
    } 
    else if (head->next == NULL) {
        // Only one node
        printf("\nDeleted node: %d\n", head->data);
        free(head);
        head = NULL;
    } 
    else {
        // More than one node
        temp = head;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        printf("\nDeleted node: %d\n", temp->data);
        prev->next = NULL;
        free(temp);
    }

    // Display after deletion
    printf("\nLinked list after deletion:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
