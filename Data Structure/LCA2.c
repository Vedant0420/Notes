#include <stdio.h>

int main() {
    int a, b, c, d;
    int min;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    /* if (b < min) {
    min = b;
}
if (c < min) {
    min = c;
}
if (d < min) {
    min = d;
}*/
    printf("The minimum number is: %d\n", min);

    return 0;
}
