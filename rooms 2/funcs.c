#include <stdio.h>
#include "Header.h"

void whichroom(rooms home[3][3], int posx, int posy) {

	if (home[posx][posy] == dinning)
		printf("You're in the dinning room\n");
	else if (home[posx][posy] == kitchen)
		printf("You're in the kitchen\n");
	else if (home[posx][posy] == bathroom)
		printf("You're in the bathroom\n");
	else if (home[posx][posy] == bedroom)
		printf("You're in the bedroom\n");
	else if (home[posx][posy] == pantry)
		printf("You're in the pantry\n");


}
