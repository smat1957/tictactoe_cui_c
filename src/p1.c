#include <stdio.h>
#include <string.h>

int lineSum(int, int, int);
int switchTurn(int);
void printBoard();
int slotNum(int);
int checkWinner();
void result(int);

int board[]={0,1,2,3,4,5,6,7,8};
#define MARU 10
#define BATSU -10
#define DRAW 100
#define NEXT 200
