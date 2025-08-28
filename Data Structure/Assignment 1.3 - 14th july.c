// Q Introduction to structures
// What is structure? -  user-defined data type that allows grouping of variables of different data types under one
// struct is the keyword and student is the variable name
#include <stdio.h> 
struct Student
{
    int rollNo;       //members of structure
    char name[30];    //members of structure, the max length is 30 since [30]
    float marks;      //members of structure
};

int main() 
{
    struct Student s1 = {1272240644, "Vedant", 8.5};

    printf("Name: %s\n", s1.name);     //char datatype is represented by %s
    printf("Roll No: %d\n", s1.rollNo);//int datatype is represented by %d
    printf("Marks: %.2f\n", s1.marks); //float datatype is represented by %f

    return 0;
}

