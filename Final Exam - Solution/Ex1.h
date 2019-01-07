/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX1_H
#define EX1_H


#define COMPILE_EX_1
#ifdef COMPILE_EX_1


// TODO: Define the type ushort here (use typedef)
typedef unsigned short ushort;


void updateLifeIndicator(ushort lifeIndicator[10], ushort damage)
{
	for (int i = 9; i >= 0 && damage > 0; --i)
	{
		if (lifeIndicator[i] == 1) {
			lifeIndicator[i] = 0;
			damage--;
		}
	}
}


#endif

#endif
