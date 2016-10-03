#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void writeToFile(void);

int main(void) {

	writeToFile();

	return EXIT_SUCCESS;
}


void writeToFile(){
	FILE *fp;  // pointer to a file type
	fp = fopen("/Users/alfred/Documents/workspace/C/testfile3.txt", "w"); // Change to match your path
	char name[10] = "Alfred";
	fprintf(fp,"This message is for %s\n",name);
	fclose(fp);
}
