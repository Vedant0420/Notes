#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int isStackPermutation(int input[], int output[], int n) {
    int stack[MAX], top = -1;
    int j = 0; 

    for (int i = 0; i < n; i++) {
        stack[++top] = input[i];

        while (top >= 0 && stack[top] == output[j]) {
            top--; 
            j++;  
        }
    }
    return (j == n);
}

int main() {
    int n;
    printf("Enter number of railroad cars: ");
    scanf("%d", &n);

    int input[MAX], output[MAX];

    printf("Enter input order (1 to n):\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &input[i]);

    printf("Enter output order to check:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &output[i]);

    if (isStackPermutation(input, output, n))
        printf("YES: The given output is possible using stack.\n");
    else
        printf("NO: The given output is NOT possible using stack.\n");

    return 0;
}