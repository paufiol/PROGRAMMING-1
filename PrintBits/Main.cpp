#include <stdio.h>
#include <stdlib.h>

int main() { 
	int num = 144;
	printf("\n ");
	for (int i = 7; i >= 0; i--) {
			printf("%d ", ((num>>i) & (1)));

	}



	system("pause");
	return 0; 
}