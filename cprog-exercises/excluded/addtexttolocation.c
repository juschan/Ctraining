#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function prototypes
void addTextToLocation();

int main(void) {

	addTextToLocation();
	return EXIT_SUCCESS;
}


void addTextToLocation(){
	FILE *fp;

	fp = fopen("/Users/alfred/Documents/workspace/C/testfile.txt", "w+"); // Change to match your path
	fputs("Not much to say today", fp);

	fseek(fp, 8, SEEK_SET);
	fputs(" to talk about", fp);

	fclose(fp);
}
