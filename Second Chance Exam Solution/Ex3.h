/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX3_H
#define EX3_H

#include <stdio.h>

int countCharInFile(char* filename, char c)
{
	int count = 0;

	FILE * pFile;
	pFile = fopen(filename, "r");
	if (pFile != NULL)
	{
		char charRead;
		while (feof(pFile) == 0)
		{
			fscanf(pFile, "%c ", &charRead);

			if (charRead == c)
				count++;
		}

		fclose(pFile);
	}

	return count;
}

#endif