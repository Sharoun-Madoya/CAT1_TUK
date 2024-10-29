#include <stdio.h>

int add() {
    int num1, num2, num3, num4, sum;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    sum = num1 + num2 + num3 + num4;
    printf("Sum of the four integers:", sum);
    
}