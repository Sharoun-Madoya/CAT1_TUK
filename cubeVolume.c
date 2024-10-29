#include <stdio.h>
#define pi 3.142
#define NEWLINE '\n'


int cubeVolume(){
    int cubeVolume;

    float length, width, height;

    printf("Enter the length, width and height of the cube");
    scanf("%f", length);
    scanf("%f", width);
    scanf("%f", height);


    cubeVolume= length*width* height;

    printf( cubeVolume)
}