#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void holamundos() {

	FILE *file = fopen("Hello_worlds.txt", "w");

	if (file != nullptr) {

		for (int i = 0; i <= 10; i++) {
			fprintf(file, "%s %d\n", "Hello World", i);

		}

	}
	fclose(file);
}

struct text {
	char line[64];
};

void readMe() {

	FILE *file = fopen("Hello_worlds.txt", "r");
	text text[10];


	if (file != nullptr) {
		for (int i = 0; i < 10; i++) {
			*fgets(text[i].line, 64, file);

		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%s", text[i].line);
	}
	fclose(file);
}

void readMe2() {

	FILE *file = fopen("Hello_worlds.txt", "r");

	char c;
	if (file != nullptr) {
		while (feof(file) == 0) {
			c = fgetc(file);
			printf("%c", c);
		}

	}
	fclose(file);
}

void HowManyChars() {
	FILE *Text = fopen("Lorem_Ipsum.txt", "r");

	char c;
	int count = 0;
	if (Text != nullptr) {
		while (feof(Text) == 0) {
			c = fgetc(Text);

			count++;

		}

	}
	fclose(Text);
	printf("\n%d chars (including '\\0')", count);
}

void HowManyWords() {
	FILE *Text = fopen("Lorem_Ipsum.txt", "r");

	char c[16];
	int count = 0;
	if (Text != nullptr) {
		while (feof(Text) == 0) {
			fscanf(Text, "%s", c);

			count++;

		}

	}
	fclose(Text);
	printf("\n%d words\n\n", count);
}

void StoreEnemies() {
	FILE *Enemies = fopen("Enemies.txt", "w");

	if (Enemies != nullptr) {
		fprintf(Enemies, "Harry 3.5 0.4 10\nWedge 1.0 1.0 5\nJesse 10.0 4.0 8\n");

	}
	fclose(Enemies);
}

struct enemy {
	char name[16];
	float stats[3];
};

void EnemiesArrays() {
	FILE *Enemies = fopen("Enemies.txt", "r");
	enemy Enemy[3];
	if (Enemies != nullptr) {
		while (feof(Enemies) == 0) {
			for (int i = 0; i < 3; i++) {
				fscanf(Enemies, "%s %f %f %f", Enemy[i].name, &Enemy[i].stats[0], &Enemy[i].stats[1], &Enemy[i].stats[2]);
			}
		}
	}
	fclose(Enemies);
	for (int i = 0; i < 3; i++) {
		printf("%s %.2f %.2f %.2f\n", Enemy[i].name, Enemy[i].stats[0], Enemy[i].stats[1], Enemy[i].stats[2]);
		
	}
}


void merge() {
	FILE *A = fopen("Lorem_Ipsum.txt", "r");
	FILE *B = fopen("Laputadelacabra.txt", "r");
	FILE *RES = fopen("Merged_File.txt", "w");
	
	if  ((A  != nullptr) &&
		(B	 != nullptr) && 
		(RES != nullptr)) {
		
		char  temp[32] = {};
		
		while(fread(temp, sizeof(unsigned char), 1, A) > 0){
			
			printf("%s", temp);
			fwrite(temp, sizeof(unsigned char), 1, RES);
		
		}
		
		while (fread(temp, sizeof(unsigned char), 1, B) > 0) {

			printf("%s", temp);
			fwrite(temp, sizeof(unsigned char), 1, RES);

		}
	}
	
	fclose(A);
	fclose(B);
	fclose(RES);
}

void BinarySize(){
	FILE *file = fopen("Lorem_Ipsum.txt", "rb");
	int position; 
	if (file != nullptr) {
		
		fseek(file, 0, SEEK_END);
		position = ftell(file);
		printf("%d", position);

	}

	fclose(file);
}