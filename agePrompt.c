// (i) Write a C program to prompt the user to input her/his age and print it on the screen, as shown 
//       below.
//      Your age is 20 years old.

#include <stdio.h>

int agePrompt() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Your age is %d years old.\n", age);

}