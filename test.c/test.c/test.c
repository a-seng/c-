#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>
#include"game.h"
void game()
{
	char board[ROWS][LOWS];
	char show[ROWS][LOWS];
	printf("ɨ��\n");
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
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��:\n");
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