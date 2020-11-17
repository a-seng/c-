#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdio.h>
void menu()
{
	printf("*************************************\n");
	printf("********     1 . play     ***********\n");
	printf("********     2 . exit     ***********\n");
	printf("*************************************\n");
}
void game()
{
	char mine[rows][cols] = { 0 };
	char show[rows][cols] = { 0 };
	initboard(rows)
}
void test()
{
	int input = 0; 
	do
	{

		menu();
		printf("请选择：》");
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
			printf("选择错误， 重新选择:\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}