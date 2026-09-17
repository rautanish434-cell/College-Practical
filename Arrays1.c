#include <stdio.h>

int main() {

    char price = 'A';
    char *ptr = &price;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);   
    ptr--;
    printf("ptr = %u", ptr);
    return 0;
}

