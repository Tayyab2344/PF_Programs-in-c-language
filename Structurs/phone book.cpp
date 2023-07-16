#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char address[100];
    char phone[20];
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int numContacts = 0;

    char input[200];
    char *token;

    printf("Phone Book\n");
    printf("Enter 'quit' to exit.\n");

    while (1) {
        printf("\nEnter contact information (Name, Address, Phone): ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // remove trailing newline

        if (strcmp(input, "quit") == 0) {
            break;
        }

        token = strtok(input, ",");
        strcpy(contacts[numContacts].name, token);

        token = strtok(NULL, ",");
        strcpy(contacts[numContacts].address, token);

        token = strtok(NULL, ",");
        strcpy(contacts[numContacts].phone, token);

        numContacts++;
        printf("Contact added successfully!\n");
    }

    printf("\nPhone Book Entries:\n");
    for (int i = 0; i < numContacts; i++) {
        printf("Contact %d:\n", i+1);
        printf("Name: %s\n", contacts[i].name);
        printf("Address: %s\n", contacts[i].address);
        printf("Phone: %s\n", contacts[i].phone);
    }

    return 0;
}

