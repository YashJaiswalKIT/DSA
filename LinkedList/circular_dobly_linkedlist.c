#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{
    struct Node *n1, *n2, *n3, *temp;
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));

    n1->data = 12;
    n1->next = n2;
    n1->prev = n3;

    n2->data = 14;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 18;
    n3->next = n1;
    n3->prev = n2;

    // forward traversion in circular linked list
    printf("traversion in forward direction...\n");
    temp = n1;
    do
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    } while (temp != n1);

    printf("%d \n", n1->data);

    // forward traversion in circular linked list
    printf("traversion in backward direction...\n");
    temp = n3;
    do
    {
        printf("%d ->", temp->data);
        temp = temp->prev;
    } while (temp != n3);
    printf("%d\n", n3->data);

    return 0;
}