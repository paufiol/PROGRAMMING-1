/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX1_H
#define EX1_H


#define COMPILE_EX_1
#ifdef COMPILE_EX_1



// TODO: define the type ushort here (use typedef)
typedef unsigned short ushort;


void updateLifeIndicator(ushort lifeIndicator[10], ushort damage)
{
	for (int i = 9; i >= 0; i--) {
		if (damage == 0) break;
		if (lifeIndicator[i] == 1) {
			damage--;
			lifeIndicator[i] = 0; 
		}
	}

}



#endif

#endif
