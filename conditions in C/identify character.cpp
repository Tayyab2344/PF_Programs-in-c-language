#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        printf("The character is an alphabet.\n");
    } else if (character >= '0' && character <= '9') {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
}
}
