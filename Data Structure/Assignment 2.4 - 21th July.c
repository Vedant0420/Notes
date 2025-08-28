//Q.Write a program to calculate the sum of natural numbers from 1 to n using recursion
#include <stdio.h>

// Recursive function declaration
int addNumbers(int n);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("Sum = %d\n", addNumbers(num));
    }

    return 0;
}

// Recursive function definition
int addNumbers(int n) {
    if (n != 0)
        return n + addNumbers(n - 1);  // Recursive case
    else
        return 0;  // Base case
}
