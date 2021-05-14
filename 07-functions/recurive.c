// author: moemen ahmed 
// date: 13 May 2021
// this programs use recursive function to compute factorial of an integer


#include <stdio.h>

int factorial(int i);


int main(int argc, char** argv) {
	char again = 'y';
	int i = 0;
	int factorial_i = 0;
	while (again=='y'){
		printf("Enter a positive integer: ");
		scanf("%d", &i);
		factorial_i = factorial(i);
		printf("Answer: %d\n", factorial_i);
		printf("Do you want to try again? press 'y' to continue ... ");
		scanf(" %c", &again);
	}
	return 0;
}

int factorial(int i){
	if (i==0) {
		return 1;
	}
	else{
		return i * factorial (i - 1);
	}
}

