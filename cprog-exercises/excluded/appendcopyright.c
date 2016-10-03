#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void appendCopyrightNotice(void);

int main(void) {

	//copyFromSourceToDestination();
	appendCopyrightNotice();

	return EXIT_SUCCESS;
}

//---- FUNCTION DEFINITIONS ----

void appendCopyrightNotice(){
	FILE *fp;  // pointer to a file type
	// open the destination file to append copyright notice
	fp = fopen("/Users/alfred/Documents/workspace/C/destinationFile", "a"); // Change to match your path
	fprintf(fp,"\n\nCopyright 2014, XYZ Company");

	fclose(fp);
}
