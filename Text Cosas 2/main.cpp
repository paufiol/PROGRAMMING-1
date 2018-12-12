#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() { //copying from one file to another 
	FILE *og	= fopen("original.txt", "rb");
	FILE *copy = fopen("copied.txt", "wb");

	if ((og != nullptr) && (copy != nullptr)) {
		char chunk[10];
		while (int amount = fread(chunk, 1, sizeof(chunk), og) != 0) {
			
			fwrite(chunk, 1, amount, copy);
			
		}
	}

	//fread(where to save, size in bytes of the piece, how many pieces to read, file to read)

	fclose(og);
	fclose(copy);
	system("pause");
	return 0;
}