//(b) Write a program in c to compute the Volume of a cylinder
#include <stdio.h>
#define pi 3.142

int cylinderVolume(){
    float radius, height, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    
    volume = pi * radius * radius * height;
    printf("Volume of the cylinder:", volume);
}