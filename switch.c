#include <stdio.h>

int main() {

    int day;
    printf("Enter First number of day form(1 to 7) = ");
    scanf("%d",&day);
    switch(day) {
        case 7:
        printf("Sunday");
        break;

        case 2:
        printf("Monday");

        break;


        case 3:
        printf("Tuesday");

        break;

        case 4:
        printf("Wednesday");

        break;

        case 5:
        printf("Thurasday");

        break;

        case 6:
        printf("Friday");

        break;

        case 1:
        printf("Saturday");

        break;

        default :
        printf("Not match");


    }
    return 0;

}