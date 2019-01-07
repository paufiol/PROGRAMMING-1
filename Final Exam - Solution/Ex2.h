/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX2_H
#define EX2_H


#define COMPILE_EX_2
#ifdef COMPILE_EX_2

// TO DO: define the data type position
struct position
{
	int row;
	int column;
};



// TO DO: define the data type cell
struct cell
{
	char type;
};



struct position findPacman(struct cell labyrinth[5][5])
{
	position pos;


	// TO DO: introduce the code here
	for (int row = 0; row < 5; ++row)
	{
		for (int col = 0; col < 5; ++col)
		{
			if (labyrinth[row][col].type == 'p')
			{
				pos.row = row;
				pos.column = col;
				return pos;
			}
		}
	}

	return pos;
}

int canPacmanMoveToCell(struct cell labyrinth[5][5], struct position pacmanPos, char movement)
{


	// TO DO: introduce the code here
	switch (movement)
	{
		case 'l':
			if (pacmanPos.column > 0)
			{
				if (labyrinth[pacmanPos.row][pacmanPos.column-1].type == 'e') return 1;
			}
			break;
		case 'r':
			if (pacmanPos.column < 4)
			{
				if (labyrinth[pacmanPos.row][pacmanPos.column+1].type == 'e') return 1;
			}
			break;
		case 'u':
			if (pacmanPos.row > 0)
			{
				if (labyrinth[pacmanPos.row - 1][pacmanPos.column].type == 'e') return 1;
			}
			break;
		case 'd':
			if (pacmanPos.row < 4)
			{
				if (labyrinth[pacmanPos.row + 1][pacmanPos.column].type == 'e') return 1;
			}
			break;
		default:;
	}

	return 0;



}

#endif

#endif
