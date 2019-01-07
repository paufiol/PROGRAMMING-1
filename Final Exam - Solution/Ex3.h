/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX3_H
#define EX3_H

#include <stdio.h>

#define COMPILE_EX_3
#ifdef COMPILE_EX_3

void duplicate(const char* filename1, const char* filename2)
{
	// TO DO: introduce the code here
	FILE *srcFile = fopen(filename1, "rb");
	if (srcFile == nullptr)
	{
		return;
	}

	FILE *dstFile = fopen(filename2, "wb");
	if (dstFile == nullptr)
	{
		fclose(srcFile);
		return;
	}

	size_t bytesRead;
	unsigned char buffer[1024];
	while ((bytesRead = fread(buffer, sizeof(unsigned char), 1024, srcFile)) > 0)
	{
		fwrite(buffer, sizeof(unsigned char), bytesRead, dstFile);
	}

	fclose(srcFile);
	fclose(dstFile);
}

#endif

#endif
