//  Q1.Write a C program to enter whole number, find and display the minimum number among the 4 entered numbers.
//  Algorithm for Q1 
//  Declare 4 Variables using int data type next step enter the number, next step condition to check which one is the minimum among the 4 number

#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter four numbers: ");
scanf("%d %d %d %d", &a, &b, &c, &d);

// Now we use if else statements to check which is the minimum number
if (a < b && a < c && a < d)
    printf("A is the Minimum number is: %d\n", a);
else if (b < c && b < d)
    printf("B is the Minimum number is: %d\n", b);
else if (c < d)
    printf("C is the Minimum number is: %d\n", c);
else
    printf("D is the Minimum number is: %d\n", d);

return 0;
}
