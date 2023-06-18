#include <stdio.h>

int main() {
    float num1, num2;
 
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);
  
    float sum = num1 + num2;
    printf("Sum: %.2f\n", sum);
   
    float product = num1 * num2;
    printf("Multiplication: %.2f\n", product);
  
    float difference = num1 - num2;
    printf("Subtraction: %.2f\n", difference);
  
    float quotient = num1 / num2;
    printf("Division: %.2f\n", quotient);
}

