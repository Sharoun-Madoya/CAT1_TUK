// (c) Write a program in c to compute the speed of a car
#include <stdio.h>

int carSpeed(){
    float distance, speed, time;

    printf("Enter the distance traveled (in km): ");
    scanf("%f", &distance);
    
    printf("Enter the time taken (in hours): ");
    scanf("%f", &time);
    
    speed = distance / time;
    printf("Speed of the car:", speed);
}