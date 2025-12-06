#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    
    struct Node *next;
};
int main(){
    struct Node *head=NULL,*n1,*n2,*n3,*temp;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));

    n1->data=12;
    n1->next=n2;

    n2->data=14;
    n2->next=n3;

    n3->data=16;
    n3->next=NULL;

    //deletion at bigging
    head=n1;
   head =head->next;
    free(n1);
    temp=head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;

}



// deletion at end

// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// int main()
// {
//     struct Node *head = NULL, *n1, *n2, *n3, *temp;
//     n1 = (struct Node *)malloc(sizeof(struct Node));
//     n2 = (struct Node *)malloc(sizeof(struct Node));
//     n3 = (struct Node *)malloc(sizeof(struct Node));

//     n1->data = 12;
//     n1->next = n2;

//     n2->data = 14;
//     n2->next = n3;

//     n3->data = 16;
//     n3->next = NULL;

//     // deletion at end
//     free(n3);
//     n2->next = NULL;

//     temp = n1;

//     while (temp != NULL)
//     {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
//     return 0;
// }



//deletion at middele Node


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *n1, *n2, *n3, *temp;

    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    n3 = (struct Node*)malloc(sizeof(struct Node));

    n1->data = 12;
    n1->next = n2;

    n2->data = 14;
    n2->next = n3;

    n3->data = 16;
    n3->next = NULL;

    // 🔹 Deletion at middle (delete n2)
    n1->next = n3;  // link n1 directly to n3
    free(n2);       // free the middle node
 
    // 🔹 Traversal
    temp = n1;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
