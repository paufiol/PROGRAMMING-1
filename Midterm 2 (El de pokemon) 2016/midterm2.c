#define _CRT_SECURE_NO_WARNINGS

#include "SimpleUnitTest.h"
#include "Exercises.h"
//#include <stdio.h>
//#include <stdlib.h>


void testExercises();

int main()
{
	/* -- Auto evaluation -- */
	/* Uncomment the line below if you want to evaluate your code */
	testExercises();

	getchar();
	return 0;
}



/* ----------------------------------------------------------------------- */
/*                     DO NOT TOUCH THE CODE BELOW                         */
/* ----------------------------------------------------------------------- */

void testExercises()
{

	int vec1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int vec2[27] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
					 -1, -2, -3, -4, -5, -6, -7, -8, -9, -10,
					 34, -87, 56, 0, -255, 255, 44};
	int vec3[1] = { 10 };
	int vec4[5] = { -2, 602, 7867, -91, 192 };

	TEST("Test Ex 1: minPlusMax", 
		minPlusMax(vec1, 10) == 11 &&
		minPlusMax(vec1, 10) != -11 &&
		minPlusMax(vec2, 27) == 0 &&
		minPlusMax(vec3, 1) == 20 &&
		minPlusMax(vec4, 5) == 7776);

	struct pixel tile1[8][8];
	struct pixel tile2[8][8];
	struct pixel tile3[8][8];
	struct pixel tile4[8][8];
	struct pixel red = { 255, 0, 0 };
	struct pixel col1 = { 44, 88, 111 };
	struct pixel col2 = { 1, 2, 3 };

	tile1[0][0] = red;
	tile1[0][1] = red;
	tile1[0][2] = red;
	tile1[0][3] = red;
	tile1[0][4] = red;
	tile1[0][5] = red;
	tile1[0][6] = red;
	tile1[0][7] = red;

	tile1[1][0] = red;
	tile1[1][1] = red;
	tile1[1][2] = red;
	tile1[1][3] = red;
	tile1[1][4] = red;
	tile1[1][5] = red;
	tile1[1][6] = red;
	tile1[1][7] = red;

	tile1[2][0] = red;
	tile1[2][1] = red;
	tile1[2][2] = red;
	tile1[2][3] = red;
	tile1[2][4] = red;
	tile1[2][5] = red;
	tile1[2][6] = red;
	tile1[2][7] = red;

	tile1[3][0] = red;
	tile1[3][1] = red;
	tile1[3][2] = red;
	tile1[3][3] = red;
	tile1[3][4] = red;
	tile1[3][5] = red;
	tile1[3][6] = red;
	tile1[3][7] = red;

	tile1[4][0] = red;
	tile1[4][1] = red;
	tile1[4][2] = red;
	tile1[4][3] = red;
	tile1[4][4] = red;
	tile1[4][5] = red;
	tile1[4][6] = red;
	tile1[4][7] = red;

	tile1[5][0] = red;
	tile1[5][1] = red;
	tile1[5][2] = red;
	tile1[5][3] = red;
	tile1[5][4] = red;
	tile1[5][5] = red;
	tile1[5][6] = red;
	tile1[5][7] = red;

	tile1[6][0] = red;
	tile1[6][1] = red;
	tile1[6][2] = red;
	tile1[6][3] = red;
	tile1[6][4] = red;
	tile1[6][5] = red;
	tile1[6][6] = red;
	tile1[6][7] = red;

	tile1[7][0] = red;
	tile1[7][1] = red;
	tile1[7][2] = red;
	tile1[7][3] = red;
	tile1[7][4] = red;
	tile1[7][5] = red;
	tile1[7][6] = red;
	tile1[7][7] = red;

	tile2[0][0] = red;
	tile2[0][1] = red;
	tile2[0][2] = red;
	tile2[0][3] = red;
	tile2[0][4] = red;
	tile2[0][5] = red;
	tile2[0][6] = red;
	tile2[0][7] = red;

	tile2[1][0] = red;
	tile2[1][1] = red;
	tile2[1][2] = red;
	tile2[1][3] = red;
	tile2[1][4] = red;
	tile2[1][5] = red;
	tile2[1][6] = red;
	tile2[1][7] = red;

	tile2[2][0] = red;
	tile2[2][1] = red;
	tile2[2][2] = red;
	tile2[2][3] = red;
	tile2[2][4] = red;
	tile2[2][5] = red;
	tile2[2][6] = red;
	tile2[2][7] = red;

	tile2[3][0] = red;
	tile2[3][1] = red;
	tile2[3][2] = red;
	tile2[3][3] = red;
	tile2[3][4] = red;
	tile2[3][5] = red;
	tile2[3][6] = red;
	tile2[3][7] = red;

	tile2[4][0] = red;
	tile2[4][1] = red;
	tile2[4][2] = red;
	tile2[4][3] = red;
	tile2[4][4] = red;
	tile2[4][5] = red;
	tile2[4][6] = red;
	tile2[4][7] = red;

	tile2[5][0] = red;
	tile2[5][1] = red;
	tile2[5][2] = red;
	tile2[5][3] = red;
	tile2[5][4] = red;
	tile2[5][5] = red;
	tile2[5][6] = red;
	tile2[5][7] = red;

	tile2[6][0] = red;
	tile2[6][1] = red;
	tile2[6][2] = red;
	tile2[6][3] = red;
	tile2[6][4] = red;
	tile2[6][5] = red;
	tile2[6][6] = red;
	tile2[6][7] = red;

	tile2[7][0] = red;
	tile2[7][1] = red;
	tile2[7][2] = red;
	tile2[7][3] = red;
	tile2[7][4] = red;
	tile2[7][5] = red;
	tile2[7][6] = red;
	tile2[7][7] = red;

	tile3[0][0] = col1;
	tile3[0][1] = col1;
	tile3[0][2] = col1;
	tile3[0][3] = col1;
	tile3[0][4] = col1;
	tile3[0][5] = col1;
	tile3[0][6] = col1;
	tile3[0][7] = col1;

	tile3[1][0] = col1;
	tile3[1][1] = col1;
	tile3[1][2] = col1;
	tile3[1][3] = col1;
	tile3[1][4] = col1;
	tile3[1][5] = col1;
	tile3[1][6] = col1;
	tile3[1][7] = col1;

	tile3[2][0] = col1;
	tile3[2][1] = col1;
	tile3[2][2] = col1;
	tile3[2][3] = col1;
	tile3[2][4] = col1;
	tile3[2][5] = col1;
	tile3[2][6] = col1;
	tile3[2][7] = col1;

	tile3[3][0] = col1;
	tile3[3][1] = col1;
	tile3[3][2] = col1;
	tile3[3][3] = col1;
	tile3[3][4] = col1;
	tile3[3][5] = col1;
	tile3[3][6] = col1;
	tile3[3][7] = col1;

	tile3[4][0] = col1;
	tile3[4][1] = col1;
	tile3[4][2] = col1;
	tile3[4][3] = col1;
	tile3[4][4] = col1;
	tile3[4][5] = col1;
	tile3[4][6] = col1;
	tile3[4][7] = col1;

	tile3[5][0] = col1;
	tile3[5][1] = col1;
	tile3[5][2] = col1;
	tile3[5][3] = col1;
	tile3[5][4] = col1;
	tile3[5][5] = col1;
	tile3[5][6] = col1;
	tile3[5][7] = col1;

	tile3[6][0] = col1;
	tile3[6][1] = col1;
	tile3[6][2] = col1;
	tile3[6][3] = col1;
	tile3[6][4] = col1;
	tile3[6][5] = col1;
	tile3[6][6] = col1;
	tile3[6][7] = col1;

	tile3[7][0] = col1;
	tile3[7][1] = col1;
	tile3[7][2] = col1;
	tile3[7][3] = col1;
	tile3[7][4] = col1;
	tile3[7][5] = col1;
	tile3[7][6] = col1;
	tile3[7][7] = col1;

	tile4[0][0] = col1;
	tile4[0][1] = col1;
	tile4[0][2] = col1;
	tile4[0][3] = col1;
	tile4[0][4] = col1;
	tile4[0][5] = col1;
	tile4[0][6] = col1;
	tile4[0][7] = col1;

	tile4[1][0] = col1;
	tile4[1][1] = col1;
	tile4[1][2] = col1;
	tile4[1][3] = col1;
	tile4[1][4] = col1;
	tile4[1][5] = col1;
	tile4[1][6] = col1;
	tile4[1][7] = col1;

	tile4[2][0] = col1;
	tile4[2][1] = col1;
	tile4[2][2] = col1;
	tile4[2][3] = col1;
	tile4[2][4] = col1;
	tile4[2][5] = col1;
	tile4[2][6] = col1;
	tile4[2][7] = col1;

	tile4[3][0] = col1;
	tile4[3][1] = col1;
	tile4[3][2] = col1;
	tile4[3][3] = col1;
	tile4[3][4] = col1;
	tile4[3][5] = col1;
	tile4[3][6] = col1;
	tile4[3][7] = col1;

	tile4[4][0] = col1;
	tile4[4][1] = col1;
	tile4[4][2] = col1;
	tile4[4][3] = col1;
	tile4[4][4] = col1;
	tile4[4][5] = col1;
	tile4[4][6] = col1;
	tile4[4][7] = col1;

	tile4[5][0] = col1;
	tile4[5][1] = col1;
	tile4[5][2] = col1;
	tile4[5][3] = col1;
	tile4[5][4] = col1;
	tile4[5][5] = col1;
	tile4[5][6] = col1;
	tile4[5][7] = col1;

	tile4[6][0] = col1;
	tile4[6][1] = col1;
	tile4[6][2] = col1;
	tile4[6][3] = col1;
	tile4[6][4] = col1;
	tile4[6][5] = col1;
	tile4[6][6] = col1;
	tile4[6][7] = col1;

	tile4[7][0] = col1;
	tile4[7][1] = col1;
	tile4[7][2] = col1;
	tile4[7][3] = col1;
	tile4[7][4] = col1;
	tile4[7][5] = col1;
	tile4[7][6] = col1;
	tile4[7][7] = col2;

	TEST("Test Ex 2: compareTiles", compareTiles(tile1, tile2) == 1 && 
									compareTiles(tile1, tile3) == 0 &&
									compareTiles(tile3, tile4) == 1 && 
									compareTiles(tile4, tile2) == 0);

	TEST("Test Ex 3: countWordInFile", 
		countWordInFile("example1.txt", "one") == 10 &&
		countWordInFile("example1.txt", "four") == 7 &&
		countWordInFile("example1.txt", "My") == 0 &&
		countWordInFile("example1.txt", "Guybrush") == 0 &&
		countWordInFile("example1.txt", "ten") == 1 &&
		countWordInFile("example1.txt", "hello") == 0 &&
		countWordInFile("example2.txt", "one") == 0 &&
		countWordInFile("example2.txt", "four") == 0 &&
		countWordInFile("example2.txt", "My") == 1 &&
		countWordInFile("example2.txt", "Guybrush") == 1 &&
		countWordInFile("example2.txt", "ten") == 0 &&
		countWordInFile("example2.txt", "hello") == 0);

	PRINT_TEST_REPORT();
}