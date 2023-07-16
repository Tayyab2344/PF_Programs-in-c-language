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

    printf("Phone Book\n");
    printf("Enter 'quit' to exit.\n");

    while (1) {
        printf("\nEnter contact information:\n");

        printf("Name: ");
        fgets(contacts[numContacts].name, sizeof(contacts[numContacts].name), stdin);
        contacts[numContacts].name[strcspn(contacts[numContacts].name, "\n")] = '\0'; // remove trailing newline

        if (strcmp(contacts[numContacts].name, "quit") == 0) {
            break;
        }

        printf("Address: ");
        fgets(contacts[numContacts].address, sizeof(contacts[numContacts].address), stdin);
        contacts[numContacts].address[strcspn(contacts[numContacts].address, "\n")] = '\0'; // remove trailing newline

        printf("Phone: ");
        fgets(contacts[numContacts].phone, sizeof(contacts[numContacts].phone), stdin);
        contacts[numContacts].phone[strcspn(contacts[numContacts].phone, "\n")] = '\0'; // remove trailing newline

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

