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

struct text{
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

int main() {
	//holamundos();
	//readMe(); //ESTE ES CACAS PERO USA fgets()
	readMe2();
	
	HowManyChars();
	HowManyWords();
	system("pause");
	return 0;
}

