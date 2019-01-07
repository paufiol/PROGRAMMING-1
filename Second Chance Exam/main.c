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
	/* Uncomment the line below if you want to evaluate your code */
	testExercises();

	system("pause");
	return 0;
}


/* ----------------------------------------------------------------------- */
/*                     DO NOT TOUCH THE CODE BELOW                         */
/* ----------------------------------------------------------------------- */

void testExercises()
{
	TEST(": Exercise 1: isContained(...)",
		isContained(0xFF, 0x00FF) == 1 &&
		isContained(0xFF, 0xFF00) == 1 &&
		isContained(0x01, 0x0000) == 0 &&
		isContained(0x0A, 0x10A3) == 1 &&
		isContained(0xAA, 0x1AA3) == 1 &&
		isContained(0x78, 0x0078) == 1 &&
		isContained(0x30, 0x061F) == 1 &&
		isContained(0x99, 0x0078) == 0 &&
		isContained(0xFF, 0x0FF0) == 1);

	struct Weapon armoryCloset[4][3];

	armoryCloset[0][0].id = 0; armoryCloset[0][0].damage = 1; armoryCloset[0][0].ammo = 8;
	armoryCloset[0][1].id = 1; armoryCloset[0][1].damage = 1; armoryCloset[0][1].ammo = 5;
	armoryCloset[0][2].id = 2; armoryCloset[0][2].damage = 1; armoryCloset[0][2].ammo = 5;
	
	armoryCloset[1][0].id = 10; armoryCloset[1][0].damage = 2; armoryCloset[1][0].ammo = 10;
	armoryCloset[1][1].id = 11; armoryCloset[1][1].damage = 1; armoryCloset[1][1].ammo = 3;
	armoryCloset[1][2].id = 12; armoryCloset[1][2].damage = 4; armoryCloset[1][2].ammo = 4;
	
	armoryCloset[2][0].id = 20; armoryCloset[2][0].damage = 9; armoryCloset[2][0].ammo = 1;
	armoryCloset[2][1].id = 21; armoryCloset[2][1].damage = 6; armoryCloset[2][1].ammo = 2;
	armoryCloset[2][2].id = 22; armoryCloset[2][2].damage = 6; armoryCloset[2][2].ammo = 2;
	
	armoryCloset[3][0].id = 30; armoryCloset[3][0].damage = 1; armoryCloset[3][0].ammo = 1;
	armoryCloset[3][1].id = 31; armoryCloset[3][1].damage = 2; armoryCloset[3][1].ammo = 6;
	armoryCloset[3][2].id = 32; armoryCloset[3][2].damage = 2; armoryCloset[3][2].ammo = 1;
	
	TEST(": Exercise 2: ", rowMaxAvgDamage(armoryCloset) == 2 && colMinAvgAmmo(armoryCloset) == 2);

	TEST(": Exercise 3: countCharInFile(...)",
		countCharInFile("Test_Ex3.txt", 'o') == 26 &&
		countCharInFile("Test_Ex3.txt", 'n') == 19 &&
		countCharInFile("Test_Ex3.txt", 'l') == 0 &&
		countCharInFile("Test_Ex3.txt", 'e') == 46);

	PRINT_TEST_REPORT();
}