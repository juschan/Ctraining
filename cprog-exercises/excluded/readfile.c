#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void readEntireFile(void);

int main(void) {

	readEntireFile();

	return EXIT_SUCCESS;
}

void readEntireFile(){
	int ch;
	FILE *fp;  // pointer to a file type
	fp = fopen("/Users/alfred/Documents/workspace/C/testfile.txt", "r"); // Change to match your path
	ch = getc(fp);
	while (ch != EOF){  // keep looping until End Of File
		putchar(ch);    // print the characters read
		ch = getc(fp);
	}
	fclose(fp);
}

