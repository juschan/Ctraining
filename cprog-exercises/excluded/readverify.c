#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function prototypes
void readAndVerify(void);

int main(void) {

	readAndVerify();
	return EXIT_SUCCESS;
}

void readAndVerify(){
	int ch;
	FILE *fp;  // pointer to a file type
	char messageToWrite[] = "This message will be written to a file";

	// this array will store up tp 30 characters read from the file
	char textBuffer[30];

	// open the file for read/write using the w+ directive
	fp = fopen("/Users/alfred/Documents/workspace/C/testfile.txt", "w+");
	fwrite(messageToWrite, strlen(messageToWrite)+1, 1, fp);

	// Go back to the beginning of the file using fseek
	fseek(fp, SEEK_SET, 0);

	// Verify that the message has been written by reading the file
	// Read the same number of characters as the ones written above
	fread(textBuffer, strlen(messageToWrite)+1, 1, fp);

	printf("%s\n", textBuffer);
	fclose(fp);
}

