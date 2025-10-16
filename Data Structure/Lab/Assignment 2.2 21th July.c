#include <stdio.h>

int checkOddEven(int n1) {
    return (n1 & 1); // Returns 1 if odd, 0 if even
}

int main() {
    int n1;

    printf("\n\nFunction: Check if the number is even or odd:\n");
    printf("----------------------------------------------\n");
    printf("Input any number: ");
    scanf("%d", &n1);

    // If checkOddEven() returns 1, then the number is odd
    if (checkOddEven(n1)) {
        printf("The entered number is odd.\n\n");
    } else {
        printf("The entered number is even.\n\n");
    }

    return 0;
}
