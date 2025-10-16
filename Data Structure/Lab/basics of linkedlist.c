    // #include <stdio.h>
    // #include <stdlib.h>
    // typedef struct basics_of_linkedlist //Ddefine node as pointer of datatype.
    // {
    // int data;
    // struct basics_of_linkedlist* next;
    // } *node;
    // node CreateNode() {
    //     node temp;
    //     temp = (node)malloc(sizeof(struct basics_of_linkedlist));  temp is a variable and its datatype is node.
    //     temp->next = NULL;
    //     return temp;
    // }


//     #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// int main() 
// {   
//     return 0;
// }

//Q write a simple c program to display simple linkedlist

#include <stdio.h>
#include <stdlib.h>
typedef struct Node 
{
    int data;
    struct Node* next;
} 

Node;

int main() {
    
    Node* head = malloc(sizeof(Node));
    Node* second = malloc(sizeof(Node));
    Node* third = malloc(sizeof(Node));


    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    free(head);
    free(second);
    free(third);

    return 0;
}
