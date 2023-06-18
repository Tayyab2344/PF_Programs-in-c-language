#include <stdio.h>

float calculateBMI(float weight, float height) {
    float heightInMeters = height / 39.37;  // Converting height from inches to meters
    return weight / (heightInMeters * heightInMeters); // Calculating BMI
}

void printBMICategory(float bmi) {
    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("BMI Category: Underweight\n");
    } else if (bmi < 24.9) {
        printf("BMI Category: Normal weight\n");
    } else if (bmi < 29.9) {
        printf("BMI Category: Overweight\n");
    } else if (bmi < 34.9) {
        printf("BMI Category: Obesity (Class 1)\n");
    } else if (bmi < 39.9) {
        printf("BMI Category: Obesity (Class 2)\n");
    } else {
        printf("BMI Category: Extreme obesity (Class 3)\n");
    }
}

int main() {
    float weight, heightFeet, heightInches;

    printf("Enter weight (in kilograms): ");
    scanf("%f", &weight);

    printf("Enter height (in feet and inches): ");
    scanf("%f %f", &heightFeet, &heightInches);

    float height = heightFeet * 12 + heightInches; // Converting height to inches

    float bmi = calculateBMI(weight, height);
    printBMICategory(bmi);
}

