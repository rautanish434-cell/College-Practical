 #include <stdio.h>

 int main() {
   // int age = 19;

   // int *ptr = &age;
   // // Address print.

   // printf("%u\n", &age);  //address of age variable.

   // printf("%u\n", ptr);  //value at ptr, and we can here value at ptr is address of age.

   // printf("%u\n", &ptr);  //address of ptr.

   // // value print.

   // printf("%d\n", age);
   // printf("%d\n", *ptr);
   // printf("%d\n", *(&age));

   int i = 10;

   int *ptr = &i;

   int **pptr = &ptr;

   printf("%d", **pptr);



    return 0;
 }