/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX3_H
#define EX3_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int countCharInFile(char* filename, char c)
{
	FILE *file = fopen(filename, "rb");
	int amount = 0;
	int count = 0;

	if (file != NULL) {
		while (feof(file) == 0) {
			
			if (fgetc(file) == c) {
				count++;
			}
		

		}
		fclose(file);

	}
	else {
		printf("\nShit's broken\n");
	}
	

	return count;
}

#endif