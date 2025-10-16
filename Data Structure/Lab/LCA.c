#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll_no; 
    char name[50];
    float marks;
};
int main() {
    struct student s;
    printf("Enter roll no: ");
    scanf("%d", &s.roll_no);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\n--- student details ---\n");
    printf("Roll No : %d\n", s.roll_no);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);

    return 0;
}
