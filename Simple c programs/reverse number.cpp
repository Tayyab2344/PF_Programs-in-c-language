#include <stdio.h>

int main() {
    int number, reversedNumber = 0;
    
   
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
    
 
    reversedNumber += (number % 10) * 10000;
    number = number / 10;
    
    reversedNumber += (number % 10) * 1000;
    number = number / 10;
    
    reversedNumber += (number % 10) * 100;
    number = number / 10;
    
    reversedNumber += (number % 10) * 10;
    number = number / 10;
    
    reversedNumber += number;
    
   
    printf("Reversed number: %d\n", reversedNumber);
    

}

