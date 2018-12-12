#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int n = 3; 
	
	printf("n: %d\n", n);
	//cout << *foo << endl; c++

	int *foo = &n;

	printf("n pointer: %d\n", foo);

	printf("n through pointer recovery: %d\n", *foo);

	*foo = 5;

	printf("modified n through pointer: %d\n", n);


	int vector[10];// = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *pointer1 = &vector[2];
	//int *pointer2 = vector[2];

	system("pause");
	return 0;
}


