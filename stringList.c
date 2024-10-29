// (j)  Write a function that takes a list of strings an prints them, one per line, in a rectangular frame.   
//     For example the list ["Hello", "World", "in", "a", "frame"] gets printed as:
//      *********
//      * Hello *
//      * World *
//      * in    *
//      * a     *
//      * frame *
//      *********


#include <stdio.h>
#include <string.h>

void print_in_frame(char *strings[], int count) {
    int maxLength = 0;
    
    //finding the length  of strings
    for (int i = 0; i < count; i++) {
        int len = strlen(strings[i]);
        if (len > maxLength) {
            maxLength = len;
        }
    }
    
    // Printing the frame
    for (int i = 0; i < maxLength + 4; i++) {
        printf("*");
    }
    printf("\n");
    
    // Printing the strings
    for (int i = 0; i < count; i++) {
        printf("* %-*s *\n", maxLength, strings[i]);
    }
    
    // Print the bottom frame
    for (int i = 0; i < maxLength + 4; i++) {
        printf("*");
    }
    printf("\n");
}

int stringList() {
    char *list[] = {"Hello", "World", "in", "a", "frame"};
    int count = sizeof(list) / sizeof(list[0]);
    
    print_in_frame(list, count);
    
    return 0;
}
