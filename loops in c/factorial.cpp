#include <stdio.h>

int main() {
    int value, factorial = 1;

    printf("Enter a value: ");
    scanf("%d", &value);

    for (int i = 1; i <= value; i++) {
        factorial *= i;
    }

    printf("%d! = %d\n", value, factorial);

}

