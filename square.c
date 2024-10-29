//(e) Write a program in c to compute the square of four intergers
#include <stdio.h>

int squares() {
    int num1, num2, num3, num4;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    printf("Square of %d: %d\n", num1, num1 * num1);
    printf("Square of %d: %d\n", num2, num2 * num2);
    printf("Square of %d: %d\n", num3, num3 * num3);
    printf("Square of %d: %d\n", num4, num4 * num4);
    
    }