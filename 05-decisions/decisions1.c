/* author : moemen.ahmed@gmali.com
 * date: 11 May 20
 * purpose: testing logical comparisons, operators, and decisions making in C
 */

// include stdio.h to allow the use of printf() and scanf()
#include <stdio.h>
// include string.h to handle strings comparisions and string manipulation
#include <string.h>

// used pre-processing #define to define constants (Macros)
// notice that const could be used to assign constants as well.
#define ADULT 18
#define SENIOR 60
#define MATURE 40

int main( int argc, char** argv ){
    // declare an array to carry out the name
    char name[30];
    // decalre and initialize an integer for the age variable
    int age = 0;
    printf("Enter your name, please : ");
    scanf("%s", name);
    printf("\nEnter an integer between 0 and 100 :"); 
    // notice the use of & to reference the age variable. 
    // scanf() requires a pointer to pass the variable to, hence we use &
    scanf("%d", &age);


    if (age <= 10) {
        printf("\n Wrong Answer! Good Bye\n");
        return 0;
    }

    // notice the use of strcmp, which returns 0 if both strings are equals
    if (strcmp(name,"Moemen") == 0){
        printf("You have no place here, good bye!\n");
        return 0;
    }
    else{
        printf("Nice to meet you, %s\n", name);
    }
    
    // What about the use of trinary operator?
    int sneaky = 0;
    sneaky = strcmp(name, "moemen") == 0? 1 : 0;
    if (sneaky == 1) {
        printf("\nDon't try to be sneaky, Moemen :-( Good Bye!\n");
        return 0;
    }

    // notice that the expression in case statements must be integral
    // case expression cannot be logical comparison in C language
    switch (age){
        case ADULT:
           printf("\n You are too young, good for you\n");  
           break;
        case MATURE:
            printf("\nEnjoy the good years \n");
            break;
        case SENIOR:
            printf("\nMake everyday counts!\n");
            break;
        default:
            printf("\nI am glad to you make till here, have fun, work hard, and enjoy;-)\n");
            break;
    }
    return 0;
}

