#include <stdio.h>
#define rate 0.10

int interest() {
    float principal, interest;
    int year = 1; 
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    interest = principal * rate * year;
    printf("Simple Interest for 1 year at 10%%: %.2f\n", interest);

}
