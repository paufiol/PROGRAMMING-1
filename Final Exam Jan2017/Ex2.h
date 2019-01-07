/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX2_H
#define EX2_H


#define COMPILE_EX_2
#ifdef COMPILE_EX_2



// TODO: define the data type position



// TODO: define the data type cell
struct position {
	int row; 
	int column;
};

struct cell {
	char type;
};



struct position findPacman(struct cell labyrinth[5][5])
{
	position pacman;
	pacman.row = 0;
	pacman.column = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (labyrinth[i][j].type == 'p') { 
				pacman.row = i;
				pacman.column = j; 
				return pacman;
			}
		}
	}
	
}

int canPacmanMoveToCell(struct cell labyrinth[5][5], struct position pacmanPos, char movement) 
{
	if (movement == 'u'){
		pacmanPos.row--;
		if (pacmanPos.row < 0) {
			return 0;
		}
	}
	if (movement == 'd') {
		pacmanPos.row++;
		if (pacmanPos.row > 4) {
			return 0;
		}
	}
	if (movement == 'l') {
		pacmanPos.column--;
		if (pacmanPos.column < 0) {
			return 0;
		}
	}
	if (movement == 'r') {
		pacmanPos.column++;
		if (pacmanPos.column > 4) {
			return 0;
		}
	}
	//else { return 0;  }
	
	if (labyrinth[pacmanPos.row][pacmanPos.column].type == 'e') { 
		return 1; 
	}

	return 0;
}



#endif

#endif
