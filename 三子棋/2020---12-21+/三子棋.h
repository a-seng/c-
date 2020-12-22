#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define LOW 3
//ÉùÃ÷
void InitBoard(char Board[ROW][LOW],int row,int  low);
 void DisplayBoard(char Board[ROW][LOW], int row, int  low);
 void PlayerMove(char Board[ROW][LOW], int row, int  low);
 void ComputerMove(char Board[ROW][LOW], int row, int  low);
 char IsWin(char Board[ROW][LOW], int row, int  low);