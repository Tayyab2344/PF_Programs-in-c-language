#include <stdio.h>

#define MAX_SIZE 100

void countCharacterFrequency(const char* str) {
    int frequency[256] = {0}; 

    int i = 0;
    while (str[i] != '\0') {
        frequency[(int)str[i]]++;
        i++;
    }

    printf("Character Frequency:\n");
    for (int j = 0; j < 256; j++) {
        if (frequency[j] != 0) {
            printf("'%c': %d\n", (char)j, frequency[j]);
        }
    }
}

int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCharacterFrequency(str);

    return 0;
}

