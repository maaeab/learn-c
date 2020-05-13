#include <stdio.h>

float modifyNumber(float number);

int modifiers[5] = {1, 2, 3, 4, 5};

static int index = 0;

int main( int argc, char** argv) {
    float number;
    printf("Enter a float number: ");
    while (1 > 0) {
        printf("Enter a float number: ");
        scanf(" %f", &number);
        float result = modifyNumber(number);
        printf("result : %f\n",result);
    }

    return 0;
}

float modifyNumber(float number) {
    float r;
    r = number + modifiers[index];
    index = (index == 4) ? 0 : (index + 1);
    return r;
}


