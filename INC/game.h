#ifndef GAME_H
#define GAME_H

#include "game_struct.h"
#include "option_struct.h"

#include "thread_struct.h"

#define MIN_COLS_SIZE 5
#define MIN_ROWS_SIZE 3

#define MAX_COLS_SIZE 50
#define MAX_ROWS_SIZE 30
#define POURCENT_BEEN_ALIVE 15

#define DEAD_CELL 0
#define ALIVE_CELL 1

#define POS(X, Y, G) (__position(X,Y,G))

#define gameTick(g)        \
do {                       \
	threadParam tp = {.min = 0, .max = g-> cols};   \
	gameTickP(g, tp); \
} while(0);

void gamePrintInfo ( Game* g, Option o);

void freeGame(Game* g);

Game* generateRandomBoard();

void gameTickP(Game* g, threadParam tp);

void __swapGrid(Game* g);

Game* loadBoard(char* name);
#endif
