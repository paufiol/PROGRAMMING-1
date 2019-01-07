/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX3_H
#define EX3_H

#include <stdio.h>
#include <string.h>

#define COMPILE_EX_3
#ifdef COMPILE_EX_3



void duplicate(const char* filename1, const char* filename2)
{
	unsigned int amount;
	unsigned char chunk[1024]; 
	FILE* source = fopen(filename1, "rb");
	FILE* destiny = fopen(filename2, "wb");
	if ((source != nullptr) && (destiny != nullptr)) {
		while ((amount = fread((chunk), sizeof(unsigned char), 1024, source)) > 0) {
			fwrite(chunk, sizeof(unsigned char), amount, destiny);
			
		}


	}
	fclose(source);
	fclose(destiny); 

}



#endif

#endif
