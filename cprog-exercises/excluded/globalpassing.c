#include <stdio.h>
#include <stdlib.h>

//Globals
double temperature;  // Deliberately not initialized

//Function prototypes
void measure(void);

int main(void) {



	measure();
	printf("After measure()  temperature=%.1lf\n", temperature);


	return EXIT_SUCCESS;
}

//---- FUNCTION DEFINITIONS ----


void measure(void){
	// This function modifies a global variable
		temperature = 50.2;
}
