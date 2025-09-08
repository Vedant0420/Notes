//  WAP to reverse a stack using linked list.

#include <stdio.h>
#include <stdlib.h>

// Structure for stack node
struct Node {
    char data;
    struct Node *next;
};

struct Node *top = NULL;

// PUSH operation
void push(char value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

// DISPLAY stack
void display() {
    struct Node *temp = top;
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack (Top to Bottom): ");
    while (temp != NULL) {
        printf("%c ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// REVERSE stack using simple pointer logic
void reverse() {
    struct Node *prev = NULL, *curr = top, *next = NULL;

    while (curr != NULL) {
        next = curr->next;   // Save next node
        curr->next = prev;   // Reverse the link
        prev = curr;         // Move prev ahead
        curr = next;         // Move curr ahead
    }

    top = prev; // Update top to new head
}

int main() {
    // Pushing elements like your example
    push('L');
    push('M');
    push('A');
    push('O');

    printf("\nInitial Stack:\n");
    display();

    reverse();

    printf("\nReversed Stack:\n");
    display();

    return 0;
}


