#include <stdio.h>

void fun1(int x);
int fun2(int y);


int main(int argc, int** argv){
	fun1(5);
	// fun2(50);  //--- notice that trying to call fun2() shall make an error as it is out of scope
	return 0;
}

void fun1(int x){
	int y = x * 10;
	int fun2(int y){
		printf("y : %d", y);
	}
	fun2(y);
	return;
}

