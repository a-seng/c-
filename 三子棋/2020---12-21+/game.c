#define _CRT_SECURE_NO_WARNINGS 1

#include"三子棋.h"



void InitBoard(char board[ROW][LOW], int row, int  low)
{
	int i = 0, j = 0;
	for (i = 0; i < low; i++)
	{
		for (j = 0; j < row; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][LOW], int row, int  low)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < low; j++)
		{
			if (j == 0)
				printf(" %c ",board[i][j]);
			else 
			printf("| %c ", board[i][j]);

		}
		printf("\n");
		for (j = 0; j < low&&i<row-1; j++)
		{
			if (j == 0)
				printf("---", board[i][j]);
			else
				printf("|---", board[i][j]);

		}
		printf("\n");
	}
}
void PlayerMove(char Board[ROW][LOW], int row, int  low)
{
	printf("请玩家输入:>\n");
	int n, m;
	while (1)
	{
		scanf("%d%d", &n, &m);
		if (n >= 1 && n <= row&&m >= 1 && m <= low)
		{
			if (Board[n - 1][m - 1] == ' ')
			{
				Board[n - 1][m - 1] = '*';
				break;
			}
			else
				printf("该位置已被占用请重新输入\n");

		}
		else
			printf("输入错误，请重新输入\n");
		
	}
}
void ComputerMove(char Board[ROW][LOW], int row, int  low)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % low;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = '@';
			break;
		}
	}
}
int IsFull(char Board[ROW][LOW], int row, int  low)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++)
	for (j = 0; j < low;j++)
	if (Board[i][j] == ' ')
		return 0;
	return 1;
}
char IsWin(char Board[ROW][LOW], int row, int  low)
{
	int i = 0;
	//行三列
	for (i = 0; i < row; i++)
	if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][1] != ' ')
			return Board[i][1];
	for (i = 0; i < low;i++)
	if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[1][i] != ' ')
		return Board[1][i];
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] != ' ')
		return Board[1][1];
	if (Board[2][0] == Board[1][1] && Board[1][1] == Board[0][2] && Board[1][1] != ' ')
		return Board[1][1];
	if (1 == IsFull(Board, ROW, LOW))
		return 'Q';
	return 'C';
}