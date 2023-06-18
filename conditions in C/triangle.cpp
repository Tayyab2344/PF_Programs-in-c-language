#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);
    printf("Side 3: ");
    scanf("%f", &side3);

    if (side1 + side2 + side3 == 180) {
        printf("A triangle can be formed with the given side lengths.\n");
    } else {
        printf("A triangle cannot be formed with the given side lengths.\n");
    }
}

