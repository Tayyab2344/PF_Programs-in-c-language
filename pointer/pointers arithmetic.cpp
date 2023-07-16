#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // Assign the address of the first element to the pointer

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Access array elements using pointer arithmetic
    }
    printf("\n");

    // Increment the pointer by 2 using pointer arithmetic
    ptr = ptr + 2;

    printf("After pointer arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i));  // Access array elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}

