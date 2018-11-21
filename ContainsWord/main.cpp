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
	int sizeS = SizeOf(sentence);
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

	int num = containsWord("Hello Hen", "Hen");
	//printf("%d\n", num);
	int var1 = 255;
	var1 = var1 | ((1 << 3) | 1);

	int var2 = 255; 
	var2 = var2 ^ ((1 << 3) | (1 << 7));

	int var3 = 255; 
	var3 = (1 << 5);

	int var4 = 255; 
	var4 = var4 ^ ((1 << 6) | (1 << 2));

	printf("%d\n", var3);
	system("pause");
	return 0; 
}