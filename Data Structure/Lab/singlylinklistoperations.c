
// ======================== PROGRAM 1 - INSERT AT BEGINNING ========================
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     struct Student* next;
// };

// struct Student* createStudent(int rollNo, char name[]) {
//     struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
//     newStudent->rollNo = rollNo;
//     strcpy(newStudent->name, name);
//     newStudent->next = NULL;
//     return newStudent;
// }

// void insertAtBeginning(struct Student** head, int rollNo, char name[]) {
//     struct Student* newStudent = createStudent(rollNo, name);
//     newStudent->next = *head;
//     *head = newStudent;
// }

// void displayStudents(struct Student* head) {
//     if (head == NULL) {
//         printf("No student records.\n");
//         return;
//     }
//     printf("\nStudent Records:\n");
//     while (head != NULL) {
//         printf("Roll No: %d, Name: %s\n", head->rollNo, head->name);
//         head = head->next;
//     }
// }

// int main() {
//     struct Student* head = NULL;
//     int n, rollNo;
//     char name[50];

//     printf("How many students to insert at beginning? ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("\nEnter Roll No: ");
//         scanf("%d", &rollNo);
//         printf("Enter Name: ");
//         scanf("%s", name);
//         insertAtBeginning(&head, rollNo, name);
//     }

//     displayStudents(head);
//     return 0;
// }

// ======================== PROGRAM 2 - INSERT AT END ========================
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     struct Student* next;
// };

// struct Student* createStudent(int rollNo, char name[]) {
//     struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
//     newStudent->rollNo = rollNo;
//     strcpy(newStudent->name, name);
//     newStudent->next = NULL;
//     return newStudent;
// }

// void insertAtEnd(struct Student** head, int rollNo, char name[]) {
//     struct Student* newStudent = createStudent(rollNo, name);
//     if (*head == NULL) {
//         *head = newStudent;
//         return;
//     }
//     struct Student* temp = *head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newStudent;
// }

// void displayStudents(struct Student* head) {
//     if (head == NULL) {
//         printf("No student records.\n");
//         return;
//     }
//     printf("\nStudent Records:\n");
//     while (head != NULL) {
//         printf("Roll No: %d, Name: %s\n", head->rollNo, head->name);
//         head = head->next;
//     }
// }

// int main() {
//     struct Student* head = NULL;
//     int n, rollNo;
//     char name[50];

//     printf("How many students to insert at end? ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("\nEnter Roll No: ");
//         scanf("%d", &rollNo);
//         printf("Enter Name: ");
//         scanf("%s", name);
//         insertAtEnd(&head, rollNo, name);
//     }

//     displayStudents(head);
//     return 0;
// }

// ======================== PROGRAM 3 - INSERT AT POSITION ========================
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     struct Student* next;
// };

// struct Student* createStudent(int rollNo, char name[]) {
//     struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
//     newStudent->rollNo = rollNo;
//     strcpy(newStudent->name, name);
//     newStudent->next = NULL;
//     return newStudent;
// }

// void insertAtPosition(struct Student** head, int rollNo, char name[], int position) {
//     struct Student* newStudent = createStudent(rollNo, name);
//     if (position <= 1 || *head == NULL) {
//         newStudent->next = *head;
//         *head = newStudent;
//         return;
//     }
//     struct Student* temp = *head;
//     for (int i = 1; temp->next != NULL && i < position - 1; i++) {
//         temp = temp->next;
//     }
//     newStudent->next = temp->next;
//     temp->next = newStudent;
// }

// void displayStudents(struct Student* head) {
//     if (head == NULL) {
//         printf("No student records.\n");
//         return;
//     }
//     printf("\nStudent Records:\n");
//     while (head != NULL) {
//         printf("Roll No: %d, Name: %s\n", head->rollNo, head->name);
//         head = head->next;
//     }
// }

// int main() {
//     struct Student* head = NULL;
//     int n, rollNo, pos;
//     char name[50];

//     printf("How many students to insert? ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("\nEnter Roll No: ");
//         scanf("%d", &rollNo);
//         printf("Enter Name: ");
//         scanf("%s", name);
//         printf("Enter Position: ");
//         scanf("%d", &pos);
//         insertAtPosition(&head, rollNo, name, pos);
//     }

//     displayStudents(head);
//     return 0;
// }

// ======================== PROGRAM 4 - DELETE FROM BEGINNING ========================
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     struct Student* next;
// };

// void deleteFromBeginning(struct Student** head) {
//     if (*head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     struct Student* temp = *head;
//     *head = (*head)->next;
//     free(temp);
//     printf("Deleted first student.\n");
// }

// int main() {
//     struct Student* head = NULL;
//     printf("Run Program 1 or 2 first to insert students, then use this to delete.\n");
//     deleteFromBeginning(&head);
//     return 0;
// }

// ======================== PROGRAM 5 - DELETE FROM END ========================
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     struct Student* next;
// };

// void deleteFromEnd(struct Student** head) {
//     if (*head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     struct Student* temp = *head;
//     struct Student* prev = NULL;
//     while (temp->next != NULL) {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (prev == NULL)
//         *head = NULL;
//     else
//         prev->next = NULL;
//     free(temp);
//     printf("Deleted last student.\n");
// }

// int main() {
//     struct Student* head = NULL;
//     printf("Run Program 1 or 2 first to insert students, then use this to delete.\n");
//     deleteFromEnd(&head);
//     return 0;
// }

// ======================== PROGRAM 6 - DELETE BY ROLL NO ========================
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     struct Student* next;
// };

// void deleteByRollNo(struct Student** head, int rollNo) {
//     struct Student* temp = *head;
//     struct Student* prev = NULL;
//     while (temp != NULL && temp->rollNo != rollNo) {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("Student with Roll No %d not found.\n", rollNo);
//         return;
//     }
//     if (prev == NULL)
//         *head = temp->next;
//     else
//         prev->next = temp->next;
//     free(temp);
//     printf("Deleted student with Roll No %d.\n", rollNo);
// }

// int main() {
//     struct Student* head = NULL;
//     int rollNo;
//     printf("Run Program 1 or 2 first to insert students, then enter Roll No to delete.\n");
//     printf("Enter Roll No: ");
//     scanf("%d", &rollNo);
//     deleteByRollNo(&head, rollNo);
//     return 0;
// }

// ======================== PROGRAM 7 - DISPLAY STUDENTS ========================
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     struct Student* next;
// };

// void displayStudents(struct Student* head) {
//     if (head == NULL) {
//         printf("No student records.\n");
//         return;
//     }
//     printf("\nStudent Records:\n");
//     while (head != NULL) {
//         printf("Roll No: %d, Name: %s\n", head->rollNo, head->name);
//         head = head->next;
//     }
// }

// int main() {
//     struct Student* head = NULL;
//     printf("Run Program 1 or 2 first to insert students, then use this to display records.\n");
//     displayStudents(head);
//     return 0;
// }
