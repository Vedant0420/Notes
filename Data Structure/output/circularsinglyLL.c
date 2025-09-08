#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

// ----------------- Create CSLL -----------------
void createCSLL() {
    struct node *newnode;
    int choice = 1;

    head = tail = NULL;

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = tail = newnode;
            tail->next = head;
        } else {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }

        printf("Do you want to continue? (1.Yes / 0.No): ");
        scanf("%d", &choice);
    }
}

// ----------------- Insert at Beginning -----------------
void insertBeg() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (head == NULL) {
        head = tail = newnode;
        tail->next = head;
    } else {
        newnode->next = head;
        head = newnode;
        tail->next = head;
    }
    printf("Node inserted at the beginning.\n");
}

// ----------------- Insert at End -----------------
void insertEnd() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (head == NULL) {
        head = tail = newnode;
        tail->next = head;
    } else {
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }
    printf("Node inserted at the end.\n");
}

// ----------------- Delete from Beginning -----------------
void deleteBeg() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct node *temp = head;

    // If only one node exists
    if (head->next == head) {
        free(head);
        head = tail = NULL;
        printf("First node deleted. List is now empty.\n");
        return;
    }

    head = head->next;
    tail->next = head;
    free(temp);
    printf("First node deleted successfully.\n");
}

// ----------------- Delete from End -----------------
void deleteEnd() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    // If only one node exists
    if (head->next == head) {
        free(head);
        head = tail = NULL;
        printf("Last node deleted. List is now empty.\n");
        return;
    }

    struct node *temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    temp->next = head;
    free(tail);
    tail = temp;
    printf("Last node deleted successfully.\n");
}

// ----------------- Display CSLL -----------------
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *temp = head;
    printf("Circular Singly Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// ----------------- Main Menu -----------------
int main() {
    int choice;

    do {
        printf("\n--- Circular Singly Linked List Menu ---\n");
        printf("1. Create CSLL\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createCSLL(); break;
            case 2: insertBeg(); break;
            case 3: insertEnd(); break;
            case 4: deleteBeg(); break;
            case 5: deleteEnd(); break;
            case 6: display(); break;
            case 7: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}