#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void copyFromSourceToDestination(void);

int main(void) {

	copyFromSourceToDestination();
	return EXIT_SUCCESS;
}

//---- FUNCTION DEFINITIONS ----
void copyFromSourceToDestination(){
	int ch;
	FILE *src, *dest;  // pointers to a file type
	src = fopen("/Users/alfred/Documents/workspace/C/sourceFile","r"); // Change to match your path
	dest = fopen("/Users/alfred/Documents/workspace/C/destinationFile","w"); // Change to match your path
	ch = getc(src);
	while (ch != EOF){   // keep looping until EOF of source file
		putc(ch, dest);   // write to destination file
		ch = getc(src);
	}
	fclose(src);
	fclose(dest);
}

