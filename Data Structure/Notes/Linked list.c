/*
Linked list
> Representation –Static (Array) & Dynamic (Linked List ->1. Singly linked list
                                                          2. Doubly Linked list)
*/


/*Below program is to create add and display node*/
#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *next;
};

typedef struct List *node;

node create(int data)
{
    node temp = (node)malloc(sizeof(struct List));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

node add(node head, int data)
{
    node temp = create(data);
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    node temp2;
    temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return head;
}

void display(node head)
{
    if (head == NULL)
    {
        return;
    }
    node temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    node head = NULL;
    head = add(head, 10);
    head = add(head, 20);
    head = add(head, 30);
    head = add(head, 40);

    display(head);
    return 0;
}