#include <stdio.h>
#include <ctype.h>   // for isalnum()
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push function
void push(char x) {
    stack[++top] = x;
}

// Pop function
char pop() {
    if (top == -1)
        return -1;
    return stack[top--];
}

// Function to define precedence
int precedence(char x) {
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int j = 0;
    
    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];

        // If operand → add to postfix
        if (isalnum(c)) {
            postfix[j++] = c;
        }
        // If '(' → push to stack
        else if (c == '(') {
            push(c);
        }
        // If ')' → pop until '('
        else if (c == ')') {
            while (stack[top] != '(')
                postfix[j++] = pop();
            pop(); // Remove '('
        }
        // If operator
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(c))
                postfix[j++] = pop();
            push(c);
        }
    }

    // Pop remaining operators
    while (top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';  // Null terminate string

    printf("Postfix expression: %s", postfix);

    return 0;
}
