#include <stdio.h>

int main() {
    int num, i = 0, d, x;
    char *word_no[2000];  // Array of string pointers, where word_no is a string pointer.

    printf("Enter an integer value:\n");
    scanf("%d", &num);

    if (num == 0) {
        printf("zero\n");
        return 0;
    }

    while (num != 0) {
        d = num % 10;       // Get the last digit
        num = num / 10;     // Remove the last digit

        switch (d) {
            case 0: word_no[i++] = "zero"; break;
            case 1: word_no[i++] = "one"; break;
            case 2: word_no[i++] = "two"; break;
            case 3: word_no[i++] = "three"; break;
            case 4: word_no[i++] = "four"; break;
            case 5: word_no[i++] = "five"; break;
            case 6: word_no[i++] = "six"; break;
            case 7: word_no[i++] = "seven"; break;
            case 8: word_no[i++] = "eight"; break;
            case 9: word_no[i++] = "nine"; break;
        }
    }

    printf("In words: ");
    for (x = i - 1; x >= 0; x--) {
        printf("%s ", word_no[x]);
    }
    printf("\n");

    return 0;
}
