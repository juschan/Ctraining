#include<stdio.h>

int add(int, int);

int main(void){
	
	int a, b, c;
	a = 1;
	b = 3;
	
	c = add(a, b);
	printf("The sume of %d and %d is %d\n",a,b,c);
	
	return 1;
}

int add(int a, int b) {
	
	return a+b;
}
