//wap to perform stack's operation by using linkedlist approch

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack overflow! Memory not available.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top; 
    top = newNode;       
    printf("%d pushed to stack.\n", value);
}
void pop() {
    if (top == NULL) {
        printf("Stack underflow! No element to pop.\n");
        return;
    }
    struct Node* temp = top;
    printf("%d popped from stack.\n", top->data);
    top = top->next; // Move top to next node
    free(temp);      // Free memory
}
void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    pop();
    pop();
    pop(); // extra pop to show underflow
    return 0;
}
