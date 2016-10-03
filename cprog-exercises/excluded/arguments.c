#include <stdio.h>
#include <stdlib.h>

//Function prototype
void someFunction(int a, int b);

int main(void) {
	/*
	 * By value Ð argument VALUES are copied
	 * into the function parameters
	 */

	printf("--- By Value ---\n");
	int x = 0;
	int y = 0;

	printf("Before function call: x=%d   y=%d\n", x, y);
	someFunction(x,y);
	printf("After function call: x=%d   y=%d\n", x, y);


}

void someFunction(int a, int b){
	printf("In function received: a=%d   b=%d\n", a, b);
	a = 111;
	b = 222;
	printf("In function modified: a=%d   b=%d\n", a, b);
}

