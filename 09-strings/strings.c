/* author: moemen.ahmed@gmail.com
 * date: 11 May 20
 * purpose: exploring strings in C language
 */

// In this example; I manipulate the string building on the array of char idea.

#include <string.h>
#include <stdio.h>

int main( int argc, char** argv[]){
    // make a default array to receive the full name
    char name[100];
    printf("Enter your full name, please. <10 : 100 characters> ");
    
    // the use of scanset enables to read the full line with spaces until return is pressed.
    // notice that the use of %*c is what captures the return actually... think about it.
    scanf("%[^\n]%*c", name);   
    
    // simple use of standard strlen() function. 
    printf("Your full name length is : %d\n", strlen(name));
    
    // find the first name by maipulating the char array
    // The very first space in the name, is assumed to separate the first and last names.
    char* space = strchr(name, ' ');
    int firstNameLen = space - name;
    char firstName[firstNameLen + 1];
    // notice that additional to the length of the char, we should consider one more bit for the delimeter "\n"
    char lastName[98 - firstNameLen ];
    
    // for loops with char* counter, which is an integeral data-type; so it works.
    // The most important point in the code is to realize that the cahr[] name is a pointer to its first element.
    for (char* i = name; i < space; i++){
          firstName[i - name] = *i;
    }
    
    for (char* i = space + 1; i < (name + strlen(name)); i++){
          lastName[i - space - 1] = *i;
    }
    
    // print the results and return
    printf("Your first name is : %s\n", firstName ); 
    printf("Your last name is : %s\n", lastName ); 
    return 0;
}

