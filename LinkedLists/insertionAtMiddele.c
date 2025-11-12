// Insertion at the middle (without function & without user input)
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *n1, *n2, *n3, *temp;
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));

    // Assign data and link
    n1->data = 12;
    n1->next = n2;

    n2->data = 14;
    n2->next = n3;

    n3->data = 16;
    n3->next = NULL;

    // // Display before insertion
    // printf("Linked list before insertion:\n");
    // temp = n1;
    // while (temp != NULL) {
    //     printf("%d -> ", temp->data);
    //     temp = temp->next;
    // }
    // printf("NULL\n");

    // Create new node to insert
    struct Node *insert;
    insert = (struct Node *)malloc(sizeof(struct Node));
    insert->data = 13;

    // Insert after n1 (between 12 and 14)
    insert->next = n1->next;  // link new node to n2
    n1->next = insert;        // link n1 to new node

    // Display after insertion
    printf("\nLinked list after insertion in the middle:\n");
    temp = n1;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
