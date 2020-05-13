#ifndef CONTACTS_HEADER
#define CONTACTS_HEADER


// define the struct that represent the contacts
typedef struct Contacts {
    char name[100];
    unsigned long tel;
} Contact;

// define the list of contact data structure
Contact* CONTACTS;

// function to add a contact 
void addContact(Contact*);

// function to retrieve contacts list
void listContacts(void);


// caluclate the size of 1 Contact
// Notice that the additional 4bytes are added due to padding for the performance of memory. Google it for more information on the topic.
// https://stackoverflow.com/questions/119123/why-isnt-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member
int S = 100 * sizeof(char) + sizeof(unsigned long) + 4;
#endif
