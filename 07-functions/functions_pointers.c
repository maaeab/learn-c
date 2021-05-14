#include <stdio.h>

// declaring a function that takes an itneger, and a pointer to a function (takes an integer and return an integer) - and returns void
void fun1(int x, int (*f) (int x));
// declaration of a function that takes an integer and returns an integer
int fun2(int z);


int main(int argc, int** argv){
	// notice that fun2() is reachable to main() as it is decalred in the module scope.
	fun1(10, fun2);
	return 0;
}

// passing a pointer to a function as a parameter to antoher function.
// question: can this be pushed further to create return a funciton?? It doesn't seem so.
void fun1(int x, int (*f) (int)){
	int y = f(x);
	printf("result from fun2() is : %d", y);
	return;
}


int fun2(int z){
	return 10*z;
}

