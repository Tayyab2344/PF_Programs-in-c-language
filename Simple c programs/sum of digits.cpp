#include <stdio.h>

int main() {
    int number, digit, sum = 0;
    
   
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
   
    digit = number % 10;
    sum += digit;
    number = number / 10;
    
    digit = number % 10;
    sum += digit;
    number = number / 10;
    
    digit = number % 10;
    sum += digit;
    number = number / 10;
    
    digit = number % 10;
    sum += digit;
    number = number / 10;
    
    digit = number % 10;
    sum += digit;
    
    
    printf("Sum of digits: %d\n", sum);
   
}

