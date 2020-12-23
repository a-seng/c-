#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>
#include"game.h"
void game()
{
	char board[ROWS][LOWS];
	char show[ROWS][LOWS];
	printf("扫雷\n");
	Iniarr(board,ROWS,LOWS ,'0');
	Iniarr(show, ROWS, LOWS, '*');
	disPlay(show, row, low);
	SetMine(board);
	disPlay(board, row, low);
	FindMine(board, show);
}
void menu()
{

	printf("***********************\n");
	printf("*******1. play   *******\n");
	printf("*******0. exit    *******\n");
	printf("***********************\n");
	printf("***********************\n");

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择:\n");
			break;
		}
	} while (input);
}

int main()

{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}