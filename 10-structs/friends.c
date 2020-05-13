/* author: moemen.ahmed@gmail.com
 * date: 11 May 20
 * purpose: explore the structs in C language
 */
 

#include <stdio.h>
#include <string.h>

// let us build our firends' blueprint
struct friend {
    char name[50];
    unsigned int age;
    char job[50];
    unsigned int salary;
    };
    

int main( int argc, char** argv[]) {
    struct friend f1;
    struct friend f2;

    strcpy(f1.name, "Ali Gabana");
    f1.age = 25;
    strcpy(f1.job, "Engineer");
    f1.salary = 2500000;

    strcpy(f2.name, "Mamdouh Zahran");
    f2.age = 25;
    strcpy(f2.job, "Accountant");
    f2.salary = 3500000;

    struct friend friends[] = {f1, f2};
    printf("I have a total of %d friends.\n", sizeof(friends) / sizeof(f1));
    printf("My first friend name is %s.\n", friends[0].name);

    // using pointers with structs
    struct friend* f = &friends[1];
    printf("My second friend salary was %4.2f EGP.\n", (f->salary)/100.0);
    f->salary += 1000000;
    printf("My second friend was promoted, and his new salary is %4.2f EGP.\n", (f->salary)/100.0);
    
    return 0;
}
