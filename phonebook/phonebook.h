#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.h"

typedef struct PhoneBook PhoneBook;

// lifecycle
PhoneBook* create_phonebook(void);
void free_phonebook(PhoneBook* pb);

// operations
void add_contact(PhoneBook* pb, Contact c);
int remove_contact(PhoneBook* pb, const char* name);
int find_contact(PhoneBook* pb, const char* name);
void list_contacts(PhoneBook* pb);

#endif
