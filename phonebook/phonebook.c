#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phonebook.h"

#define MAX_CONTACTS 100

struct PhoneBook {
    Contact contacts[MAX_CONTACTS];
    int size;
};

PhoneBook* create_phonebook(void) {
    PhoneBook* pb = (PhoneBook*) malloc(sizeof(PhoneBook));
    if (!pb) return NULL;
    pb->size = 0;
    return pb;
}

void free_phonebook(PhoneBook* pb) {
    free(pb);
}

void add_contact(PhoneBook* pb, Contact c) {
    if (pb->size >= MAX_CONTACTS) {
        printf("Phonebook is full.\n");
        return;
    }
    pb->contacts[pb->size++] = c;
}

int find_contact(PhoneBook* pb, const char* name) {
    for (int i = 0; i < pb->size; i++) {
        if (strcmp(pb->contacts[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int remove_contact(PhoneBook* pb, const char* name) {
    int index = find_contact(pb, name);

    if (index == -1) {
        return 0; // not found
    }

    for (int i = index; i < pb->size - 1; i++) {
        pb->contacts[i] = pb->contacts[i + 1];
    }

    pb->size--;
    return 1;
}

void list_contacts(PhoneBook* pb) {
    if (pb->size == 0) {
        printf("No contacts found.\n");
        return;
    }

    for (int i = 0; i < pb->size; i++) {
        print_contact(pb->contacts[i]);
    }
}
