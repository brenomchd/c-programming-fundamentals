#ifndef CONTACT_H
#define CONTACT_H

typedef struct {
    char name[100];
    char phone[20];
} Contact;

// constructors / utils
Contact create_contact(const char* name, const char* phone);
void print_contact(Contact c);

#endif