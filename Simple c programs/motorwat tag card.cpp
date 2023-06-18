#include <stdio.h>

int main() {
    float remainingBalance, tripCost = 45.0;
    int numTrips;

    printf("Enter the remaining balance in your e-Tag card: ");
    scanf("%f", &remainingBalance);
    numTrips = remainingBalance / tripCost;

    printf("Number of trips that can be made: %d\n", numTrips);
}

