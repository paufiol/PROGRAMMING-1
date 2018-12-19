#define _CRT_SECURE_NO_WARNINGS
#include "SimpleUnitTest.h"
#include "Ex1.h"
#include "Ex2.h"
#include "Ex3.h"
#include <stdio.h>
#include <stdlib.h>

void testExercises();

int main()
{
	/* -- Auto evaluation -- */
	testExercises();

	system("pause");
	return 0;
}


/* ----------------------------------------------------------------------- */
/*                     DO NOT TOUCH THE CODE BELOW                         */
/* ----------------------------------------------------------------------- */

void testExercises()
{
#ifdef COMPILE_EX_1
	unsigned short lifeInd[10];

	lifeInd[0] = 1; lifeInd[1] = 1; lifeInd[2] = 1; lifeInd[3] = 1; lifeInd[4] = 1;
	lifeInd[5] = 1; lifeInd[6] = 1; lifeInd[7] = 1; lifeInd[8] = 1; lifeInd[9] = 1;

	updateLifeIndicator(lifeInd, 0);

	int res1 = (lifeInd[0] == 1 && lifeInd[1] == 1 && lifeInd[2] == 1 && lifeInd[3] == 1 && lifeInd[4] == 1 &&
	lifeInd[5] == 1 && lifeInd[6] == 1 && lifeInd[7] == 1 && lifeInd[8] == 1 && lifeInd[9] == 1);

	updateLifeIndicator(lifeInd, 3);

	int res2 = (lifeInd[0] == 1 && lifeInd[1] == 1 && lifeInd[2] == 1 && lifeInd[3] == 1 && lifeInd[4] == 1 &&
		lifeInd[5] == 1 && lifeInd[6] == 1 && lifeInd[7] == 0 && lifeInd[8] == 0 && lifeInd[9] == 0);

	updateLifeIndicator(lifeInd, 1);

	int res3 = (lifeInd[0] == 1 && lifeInd[1] == 1 && lifeInd[2] == 1 && lifeInd[3] == 1 && lifeInd[4] == 1 &&
		lifeInd[5] == 1 && lifeInd[6] == 0 && lifeInd[7] == 0 && lifeInd[8] == 0 && lifeInd[9] == 0);

	updateLifeIndicator(lifeInd, 10);

	int res4 = (lifeInd[0] == 0 && lifeInd[1] == 0 && lifeInd[2] == 0 && lifeInd[3] == 0 && lifeInd[4] == 0 &&
		lifeInd[5] == 0 && lifeInd[6] == 0 && lifeInd[7] == 0 && lifeInd[8] == 0 && lifeInd[9] == 0);

	updateLifeIndicator(lifeInd, 5);

	int res5 = (lifeInd[0] == 0 && lifeInd[1] == 0 && lifeInd[2] == 0 && lifeInd[3] == 0 && lifeInd[4] == 0 &&
		lifeInd[5] == 0 && lifeInd[6] == 0 && lifeInd[7] == 0 && lifeInd[8] == 0 && lifeInd[9] == 0);

	TEST(": Exercise 1: updateLifeIndicator(...)", res1 == 1 && res2 == 1 && res3 == 1 && res4 == 1 && res5 == 1);
#endif

#ifdef COMPILE_EX_2
	struct cell pacmanBoard[5][5];

	pacmanBoard[0][0].type = 'e'; pacmanBoard[0][1].type = 'e'; pacmanBoard[0][2].type = 'e'; pacmanBoard[0][3].type = 'g'; pacmanBoard[0][4].type = 'e';
	pacmanBoard[1][0].type = 'e'; pacmanBoard[1][1].type = 'w'; pacmanBoard[1][2].type = 'e'; pacmanBoard[1][3].type = 'w'; pacmanBoard[1][4].type = 'e';
	pacmanBoard[2][0].type = 'e'; pacmanBoard[2][1].type = 'g'; pacmanBoard[2][2].type = 'e'; pacmanBoard[2][3].type = 'g'; pacmanBoard[2][4].type = 'e';
	pacmanBoard[3][0].type = 'e'; pacmanBoard[3][1].type = 'w'; pacmanBoard[3][2].type = 'w'; pacmanBoard[3][3].type = 'w'; pacmanBoard[3][4].type = 'e';
	pacmanBoard[4][0].type = 'e'; pacmanBoard[4][1].type = 'e'; pacmanBoard[4][2].type = 'e'; pacmanBoard[4][3].type = 'g'; pacmanBoard[4][4].type = 'p';
	
	struct position pos = findPacman(pacmanBoard);

	int res20 = (pos.row == 4 && pos.column == 4);
	int res21 = (canPacmanMoveToCell(pacmanBoard, pos, 'u') == 1 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'd') == 0 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'l') == 0 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'r') == 0);

	pacmanBoard[4][4].type = 'e'; pacmanBoard[1][0].type = 'p';
	pos = findPacman(pacmanBoard);

	int res22 = (pos.row == 1 && pos.column == 0);
	int res23 = (canPacmanMoveToCell(pacmanBoard, pos, 'u') == 1 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'd') == 1 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'l') == 0 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'r') == 0);
	
	TEST(": Exercise 2: Pacman", res21 == 1 && res22 == 1 && res23 == 1 && res20 == 1);
#endif

	PRINT_TEST_REPORT();

#ifdef COMPILE_EX_3
	printf("\n----------\n");
	
	duplicate("Test_Ex3.txt", "Test_Ex3_copy.txt");
	printf("Exercise 3: If your code is correct, you will find the file Test_Ex3_copy.txt in the exam folder.\n");
	printf("            Open it to check if it is a copy of the file Test_Ex3.txt.\n");
	
	printf("----------\n\n");
#endif
}
