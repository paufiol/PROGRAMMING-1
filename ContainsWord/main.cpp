#include <stdio.h>
#include <stdlib.h>

int SizeOf(const char* string) {
	int size = 0;
	while (string[size] != '\0') {
		size++;
	}
	return size;
}

int containsWord(const char* sentence, const char* word) {
	int j = 0; 
	int sizeS = SizeOf(sentence); // YEETUS THAT FETUS
	int sizeW = SizeOf(word);
	for (int i = 0; i < sizeS; i++) {
		if (sentence[i] == word[j]) {
			j++; 
		}
		else {
			j = 0; 
		}
		if (j == sizeW) {
			return 1;
		}
	}
	return 0; 
}

int main() {
	char sentence[256] = {};
	char word[64] =   {};

	printf("Sentence goes here: ");
	scanf_s("%[^\n]%*c", sentence, sizeof(sentence)); 
	



	printf("word goes here: ");
	scanf_s("%[^\n]%*c", word, sizeof(word));
	
	if (containsWord(sentence, word) == 1) {
		printf("'%s' esta contenida en '%s'\n", word, sentence);
	}
	else {
		printf("'%s' no esta contenida en '%s'\n", word, sentence);
	}
	

	
	system("pause");
	return 0; 
}