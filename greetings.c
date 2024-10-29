//(h) Modify the program in (g)s uch that only the users Alice and Bob are greeted with their 
//   names. 

#include <stdio.h>
#include <string.h>

int greetings() {
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    if (strcmp(name, "Alice") == 0 || strcmp(name, "Bob") == 0) {
        printf("Hello, %s!\n", name);
    } else {
        printf("Hello!\n");
    }
    
}