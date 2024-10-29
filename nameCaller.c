// Write a program that asks the user for his name and greets him with his name

#include <stdio.h>

int nameCaller() {
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Hello, %s!\n", name);
    
}