/* author: moemen.ahmed@gmail.com
 * date: 11 May 20
 * Purpose: practice memory allocation dynamically in C programming.
 */

/*
 * the purpose of this program is to accept new contacts and store it in memory.
 * each contact is presented by a name and a telephone number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./contacts.h"



/// counter of the number of inputs 
int N = 0;

int main( ) {
    
    //printf("size of S: %d\n", S);
    Contact a, b, c;
    strcpy(a.name , "Ali Mamoud");
    a.tel = 213123123;
    strcpy(b.name , "Maha Elzeiny");
    b.tel = 543525354;
    strcpy(c.name , "Raouf Khalil");
    c.tel = 423523522;

    addContact(&a);
    addContact(&b);
    addContact(&c);
    listContacts();

    return 0;
}

// implement addContact()
void addContact(Contact* contact){
    // expand the memory allocation for the CONTACTS by the size of each new Contact
    CONTACTS = realloc(CONTACTS, (N + 1) * S);
    
    // add the new contact to the list
    strcpy(CONTACTS[N].name , contact->name);
    CONTACTS[N].tel = contact->tel;
    //printf("Name : %s, Tel: %lu \n", CONTACTS[N].name, CONTACTS[N].tel);
    N += 1;
    return ;
}

// implement listContacts()
void listContacts(void) {
    for (int i = 0; i < N; i++) {
        printf("Name: %15s - ", CONTACTS[i].name);
        printf("Tele: %lu \n", CONTACTS[i].tel);
    }
    return;
}

