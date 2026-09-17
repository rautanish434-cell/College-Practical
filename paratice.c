#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;

    int *ptr1 = &num1;

    int *ptr2 = &num2;

    printf("The sum is %d", *ptr1 + *ptr2);
    return 0;
}