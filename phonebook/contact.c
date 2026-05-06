#include <stdio.h>
#include <string.h>
#include "contact.h"

Contact create_contact(const char* name, const char* phone) {
    Contact c;

    strncpy(c.name, name, sizeof(c.name));
    c.name[sizeof(c.name) - 1] = '\0';

    strncpy(c.phone, phone, sizeof(c.phone));
    c.phone[sizeof(c.phone) - 1] = '\0';

    return c;
}

void print_contact(Contact c) {
    printf("Name: %s | Phone: %s\n", c.name, c.phone);
}