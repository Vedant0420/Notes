// Q. Write a C program to illustrate array elements (enhanced version by taking userr input)

#include <stdio.h>  

int main() 
{  
   
    int numbers[5]; // size of array is 5 so it can store 5 elements

    printf("eneter any 5 array elements:\n");

    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]); // this will store the array elements that are entered
    }

    printf("The array elemements are: \n");  
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]); // this will print the stored array elements as op
    }
    return 0; 
}
