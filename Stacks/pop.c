#include <stdio.h>
int main()
{
    int n;
    int top = -1;
    printf("Enter the Size of Stack:");
    scanf("%d", &n);
    int Stack[n];
    for (int i = 0; i < n; i++)
    {
        if (top == n - 1)
        {
            printf("overflow...");
        }
        else
        {
            int value;
            printf("Enter the value:");
            scanf("%d", &value);
            top++;
            Stack[i] = value;
        }
    }
    printf("Traversal before deletion..\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Stack[i]);
    }
    // deletion
    for (int i = 0; i < n; i++)
    {
        if (top == -1)
        {
            printf("Is underflow\n");
            break;
        }
        else
        {
            top--;
            printf("Traversal after deletion..\n");
            for (int i = 0; i <= top; i++)
            {
                printf("%d ", Stack[i]);
            }
            break;
            
        }
    }

    return 0;
}