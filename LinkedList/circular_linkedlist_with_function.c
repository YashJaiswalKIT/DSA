#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int value);
struct Node* createCircularList(int n);
void displayCircularList(struct Node* head);


struct Node* createNode(int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

// Function to create circular linked list
struct Node* createCircularList(int n) {
    struct Node *head = NULL, *temp = NULL, *newnode = NULL;
    int value, i;

    for (i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        newnode = createNode(value);

        if (head == NULL) {
            head = newnode;
            head->next = head; 
            temp = head;
        } else {
            temp->next = newnode;
            newnode->next = head; 
            temp = newnode;
        }
    }
    return head;
}

// Function to display circular linked list
void displayCircularList(struct Node* head) {
    struct Node* temp;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    temp = head;
    printf("\nCircular linked list elements:\n");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("back to head\n");
}

int main() {
    int n;
    struct Node* head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = createCircularList(n);
    displayCircularList(head);

    return 0;
}
