#include <stdio.h>

int main() {
    float initialVelocity, acceleration, time, finalVelocity, distance;

    
    printf("Enter the initial velocity: ");
    scanf("%f", &initialVelocity);
    printf("Enter the acceleration: ");
    scanf("%f", &acceleration);
    printf("Enter the time elapsed: ");
    scanf("%f", &time);

    
    finalVelocity = initialVelocity + (acceleration * time);
   
    distance = (initialVelocity * time) + (0.5 * acceleration * time * time);

    
    printf("Final velocity: %.2f\n", finalVelocity);
    printf("Distance traversed: %.2f\n", distance);

   
}

