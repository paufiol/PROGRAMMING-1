/* ----------------------------------------------------------------------- */
/*                          INSERT YOUR NAME HERE                          */
/* ----------------------------------------------------------------------- */

#ifndef EXERCISES_H
#define EXERCISES_H

#include <stdio.h>
#include <string.h>

typedef unsigned char byte;


// -- EXERCISE 1 --
int minPlusMax(int* vec, unsigned int sizeVec)
{
	// TO DO: Insert your code here
	int Max = 0, Min = 0, Sum = 0;
	for (int i = 0; i < sizeVec; i++) {
		if (vec[i] > Max || i == 0) Max = vec[i];
		if (vec[i] < Min || i == 0) Min = vec[i];
	}
	Sum = Max + Min; 
	return Sum;
}



// -- EXERCISE 2 --

// TO DO: Declare the new data type pixel here
struct pixel {
	int r; int g; int b;
};

int compareTiles(struct pixel tile1[8][8], struct pixel tile2[8][8])
{
	// TO DO: Insert your code here
	for (int i = 0; i < 8; i++) {
		for (int j = 0; i < 8; i++) {
			if ((tile1[i][j].r != tile2[i][j].r) || 
				(tile1[i][j].g != tile2[i][j].g) || 
				(tile1[i][j].b != tile2[i][j].b))
			{ return 0; }
		}
	}
	return 1;
}



// -- EXERCISE 3 --
int countWordInFile(char* filename, char* word)
{
	// TO DO: Insert your code here	
	FILE *file = fopen(filename, "r");
	char buffer[64] = { 0 };
	int count = 0;
	if(file != NULL){
		while (feof(file) == 0) {
			fscanf(file, "%s ", buffer);
			if (strcmp(buffer, word) == 0) { count++; }
		}
		fclose(file);
	}
	else { printf("somethings wrong"); }
	return count;
}


#endif