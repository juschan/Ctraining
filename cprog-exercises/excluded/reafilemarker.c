#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void readUntilMarker(char marker);

int main(void) {

	readUntilMarker('t');
	//writeToFile();

	return EXIT_SUCCESS;
}


void readUntilMarker(char marker){
	int ch;
	FILE *fp;  // pointer to a file type
	fp = fopen("/Users/alfred/Documents/workspace/C/testfile.txt", "r"); // Change to match your path
	ch = getc(fp);
	while (ch != marker){  // keep looping until End Of File
		putchar(ch);       // print the characters read
		ch = getc(fp);
	}
	fclose(fp);
}
