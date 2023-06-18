#include <stdio.h>

int calculateSum(int n) {
    if (n == 0)
        return 0;

    int sum = calculateSum(n - 1);

    sum += n;

    return sum;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = calculateSum(n);

    printf("Sum of numbers from 1 to %d is %d\n", n, sum);

}

