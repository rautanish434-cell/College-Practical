#include <stdio.h>
//declaration/prototype
void namaste();
 void bonjour();
int main(){
    //Function call
    char ch;
    printf("enter f for french and n for nepali");
    scanf("%c", &ch);

    if(ch == 'n') {
         namaste ();
    } else {
        bonjour ();
    }
    
    return 0;
} 

//function defination
void namaste() {
     printf("namaste\n");
 }
 void bonjour() {
     printf("bonjour\n");
 }