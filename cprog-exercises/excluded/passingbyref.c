#include <stdio.h>
#include <stdlib.h>


//Function prototypes

void funcByRef(int *i, int *j);

int main(void) {

	int a,b;   // Deliberately not initialized
	funcByRef (&a, &b);
	printf("After funcByRef(), a=%d  b=%d\n",a,b);
	return EXIT_SUCCESS;
}

//---- FUNCTION DEFINITIONS ----


void funcByRef(int *i, int *j){
	// This function modifies values passed
	// to its parameters by reference
	*i = 5;
	*j = 7;
}
