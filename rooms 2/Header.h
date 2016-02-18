#ifndef HOUSE_H
#define HOUSE_H
typedef enum { dinning, kitchen, bathroom, bedroom, pantry, wall } rooms;
void whichroom(rooms home[3][3], int posx, int posy);

#endif
