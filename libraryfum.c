#include <stdio.h>
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);
int main() {
   float side = 5.5;
   float radius = 6.5;
   float a = 2.2;
   float b= 3.3;

   printf("The Area of circle is : %f\n", circleArea(radius));

   printf("The Area of rectangle is : %f", rectangleArea(a, b));
    return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float radius) {
    return 3.14 * radius * radius;
}

float rectangleArea(float a, float b) {
    return a * b;
}