#include <stdio.h>

int main() {
    float menPercentage = 52.0;
    float literacyPercentage = 48.0;
    float literateMenPercentage = 35.0;
    int population = 80000;
    
   
    int totalMen = (menPercentage / 100) * population;
    
    int literateMen = (literateMenPercentage / 100) * population;
   
    int literateWomen = (literacyPercentage / 100) * population - literateMen;
    
    int illiterateMen = totalMen - literateMen;
    int illiterateWomen = population - totalMen - literateWomen;
    
    printf("Total number of illiterate men: %d\n", illiterateMen);
    printf("Total number of illiterate women: %d\n", illiterateWomen);
  
}

