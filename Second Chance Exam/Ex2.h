/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX2_H
#define EX2_H



// TO DO: Declare the data type Weapon here
struct Weapon {
	int id; int ammo; int damage;
};


int rowMaxAvgDamage(struct Weapon armoryCloset[4][3])
{
	
	int MaxAvgDamage = 0;
	int row = 0; 
	for (int i = 0; i < 3; i ++) {
		
		int AvgDamage = 0;
		
		for (int j = 0; j < 4; j++) {

			AvgDamage += armoryCloset[i][j].damage;

		}
		
		if (i == 0 || AvgDamage > MaxAvgDamage) {
			row = i;
			MaxAvgDamage = AvgDamage;
		}
		
	}
	return row;
}

int colMinAvgAmmo(struct Weapon armoryCloset[4][3])
{
	int MinAvgAmmo = 0;
	int col = 0;
	for (int i = 0; i < 3; i++) {

		int AvgAmmo = 0;

		for (int j = 0; j < 4; j++) {

			AvgAmmo += armoryCloset[i][j].ammo;

		}

		if (i == 0 || AvgAmmo < MinAvgAmmo) {
			col = i;
			MinAvgAmmo = AvgAmmo;
		}

	}
	return col;
	

}

#endif