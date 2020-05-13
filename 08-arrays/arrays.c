/* author: moemen.ahmed@gmail.com
 * date: 11 May 20
 * purpose: explore crating and manipulating arrays in C
 */

#include <stdio.h>

// declare the function calculate
float* results calculate(int* numbers, int size);

int main( int argc, char** argv) {
    // create an array of numbers carrying in the input
    int numbers[argc -1]; // the length of the array equals the number of arguments - 1
    // retrieve the data casting integer numbers into a new array
    for (int i = 1; i < (argc - 1); i++) {
        // TODO: I should check the input types first
        numbers[i] == (int) argv[i];
    }

    float results[2] = calculate(numbers, (argc - 1));
    printf("The sum of the numbers is : %f\n", rsults[0]);
    printf("The avg of the numbers is : %f\n", rsults[1]);
    return 0;
}

float* calculate(int* numbers, int size) {
    float sum = 0.0;
    float avg = 0.0;
    for (int i = 0; i <= size; i++) {
        sum += *(numbers + i);
    }
    
    avg = sum /size;
    float results[2] = {sum, avg};
    return results;
}

