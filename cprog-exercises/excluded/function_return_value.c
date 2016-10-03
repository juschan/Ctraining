#include<stdio.h>

float add2numbers(float x, float y){

	float z;
	z = x + y;
	return z;
}

int main(void) {
	float result;
	result = add2numbers(2.1, 3.4);
	printf("Sum = %f", result);
}



