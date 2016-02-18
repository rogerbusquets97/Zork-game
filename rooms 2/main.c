#include <stdio.h>
#include "Header.h"

int main(void) {

	//dinning=0, kitchen=1, bathroom=2, bedroom=3, pantry=4, wall=5
	rooms house[3][3] = { { wall, kitchen, pantry },
	{ wall, dinning, bathroom },
	{ wall, bedroom, wall } };
	int i = 1, j = 1, q = 1;
	char move;
	while (q != 0) {
		whichroom(house, i, j);
		printf("Next move?\n");
		scanf_s(" %c", &move, 1);
		switch (move) {
		case 'w':
			if ((0 < i) && (i <= 2)) {
				i--;
			}
			else
				printf("There's a wall there\n");
			if (house[i][j] == wall) {
				printf("There's a wall there\n");
				i++;
			}
			break;
		case 'a':
			if ((0 < j) && (j <= 2)) {
				j--;
			}
			else
				printf("There's a wall there\n");
			if (house[i][j] == wall) {
				printf("There's a wall there\n");
				j++;
			}
			break;
		case 's':
			if ((0 <= i) && (i<2)) {
				i++;
			}
			else
				printf("There's a wall there\n");
			if (house[i][j] == wall) {
				printf("There's a wall there\n");
				i--;
			}
			break;
		case 'd':
			if ((0 <= j) && (j<2)) {
				j++;
			}
			else
				printf("There's a wall there\n");
			if (house[i][j] == wall) {
				printf("There's a wall there\n");
				j--;
			}
			break;

		case 'q':
			q--;
			break;
		default:
			printf("That's not a move I recognize\n");
		}

		printf("\n");
		getchar();
	}
}
