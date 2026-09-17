#include <stdio.h>

int main() {
    int i = 1;
    start:
    printf("%d\n", i);
    i++;
    if(i<=10){
        goto start;
    }
    return 0;
}