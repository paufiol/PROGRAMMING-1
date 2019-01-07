/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX2_H
#define EX2_H

struct Weapon{
	unsigned short id;
	unsigned short ammo;
	unsigned short damage;
};

int rowMaxAvgDamage(struct Weapon armoryCloset[4][3])
{
	int row = 0;
	float maxAvgDamage = 0.0f;

	for (int i = 0; i < 4; ++i)
	{
		int sumDamageRow = 0;
		for (int j = 0; j < 3; j++)
		{
			sumDamageRow += armoryCloset[i][j].damage;
		}

		float avgDamageRow = sumDamageRow / 3.0f;
		
		if (i == 0 || (avgDamageRow > maxAvgDamage))
		{
			// If i == 0 initilize row and maxAvgDamage
			row = i;
			maxAvgDamage = avgDamageRow;
		}
	}

	return row;
}

int colMinAvgAmmo(struct Weapon armoryCloset[4][3])
{
	int col = 0;
	float minAvgAmmo = 0.0f;

	for (int j = 0; j < 3; ++j)
	{
		int sumAmmoCol = 0;
		for (int i = 0; i < 4; i++)
		{
			sumAmmoCol += armoryCloset[i][j].ammo;
		}

		float avgAmmoCol = sumAmmoCol / 4.0f;
		
		if (j == 0 || (avgAmmoCol < minAvgAmmo))
		{
			// Initilize col and minAvgAmmo
			col = j;
			minAvgAmmo = avgAmmoCol;
		}
	}

	return col;
}

#endif