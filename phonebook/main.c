#include <stdio.h>
#include <string.h>
#include "phonebook.h"

int main(void) {
    PhoneBook* pb = create_phonebook();
    if (!pb) {
        printf("Error creating phonebook.\n");
        return 1;
    }

    int option;
    char name[100];
    char phone[20];

    do {
        printf("\n--- PHONEBOOK MENU ---\n");
        printf("1. Add contact\n");
        printf("2. Remove contact\n");
        printf("3. Search contact\n");
        printf("4. List contacts\n");
        printf("5. Exit\n");
        printf("Choose: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Name: ");
                scanf("%s", name);

                printf("Phone: ");
                scanf("%s", phone);

                Contact c = create_contact(name, phone);
                add_contact(pb, c);
                break;

            case 2:
                printf("Name to remove: ");
                scanf("%s", name);

                if (remove_contact(pb, name)) {
                    printf("Removed successfully.\n");
                } else {
                    printf("Contact not found.\n");
                }
                break;

            case 3:
                printf("Name to search: ");
                scanf("%s", name);

                int index = find_contact(pb, name);
                if (index != -1) {
                    printf("Contact found:\n");
                    list_contacts(pb); // simples (ou pode imprimir só um)
                } else {
                    printf("Contact not found.\n");
                }
                break;

            case 4:
                list_contacts(pb);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option.\n");
        }

    } while (option != 5);

    free_phonebook(pb);
    return 0;
}
