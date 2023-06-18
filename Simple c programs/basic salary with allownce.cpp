#include <stdio.h>

int main() {
    float basicSalary, houseRent, medicalAllowance, conveyanceAllowance, totalSalary;

    printf("Enter your basic salary: ");
    scanf("%f", &basicSalary);
    
    houseRent = 0.15 * basicSalary;
    medicalAllowance = 0.10 * basicSalary;
    conveyanceAllowance = 0.05 * basicSalary;
  
    totalSalary = basicSalary + houseRent + medicalAllowance + conveyanceAllowance;

    printf("Total salary: %.2f\n", totalSalary);

}

