#include <stdio.h>


int main( int argc, char** argv) {
    int x = 10, y = 20, z;
    char a;
    float f;    
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("a is a char = %c\n", a);
    printf("f = %f\n", f);
    // the program assigned the largest +ve int to z automatically, and didn't through error.
    // the program assigned strange character to a, and 0,00000 to f.
    // therfore it is quite dangerous to start working on unassigned variables, especially that it doesn't through an error.
}

