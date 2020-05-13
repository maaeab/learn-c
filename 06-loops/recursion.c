/* author: moemen.ahmed@gmail.com
 * date: 11 May 20
 * purpose: test the looping  and recursion techniques in C language
 */

#include <stdio.h>
#include <limits.h>

// declare the function factorial(x)
unsigned long factorial(int i);

int main( int argc, char** argv){
    int x = 0;
    printf("Enter a number to calculate factorial: ");
    scanf(" %d", &x);
    printf("Factorial of %d is : %ld\n", x, factorial(x));

    return 0;
}


unsigned long factorial(int x) {
    unsigned long res = 1;
    if (x <= 1) {
        return 1;
    }
    else{
        res = x * factorial(x-1);
        // unsigned long y = factorial (x-1);
        // if (y >= ULONG_MAX) {
        // printf("Current Buffer: %lu\n", (unsigned long) (ULONG_MAX-y));
        //return 0;
        //}
        //res = x * y;
        return res;
    }
}

