#define _CRT_SECURE_NO_WARNINGS 1


#include"三子棋.h"

void menu()
{
	printf("请输入：》\n");
	printf("********************\n");
	printf("**1.play   0.exit***\n");
	printf("********************\n");
}
void game()
{
	char ret;
	char Board[ROW][LOW];
	InitBoard(Board, ROW, LOW);
	DisplayBoard(Board,ROW,LOW);
	while (1)
	{
		PlayerMove(Board, ROW, LOW);
		DisplayBoard(Board, ROW, LOW);
		ret = IsWin(Board, ROW, LOW);
		if (ret != 'C')
			break;
		ComputerMove(Board, ROW, LOW);
		DisplayBoard(Board, ROW, LOW);
		ret = IsWin(Board, ROW, LOW);
		if (ret != 'C')
			break;
	}
	if (ret == '@')
		printf("电脑赢\n");
	if (ret == '*')
		printf("玩家赢\n");
	else
		printf("平局\n");
}
void test()
{
	int Input;
	srand((unsigned int)time(NULL));
		 do 
		 {
			 scanf("%d", &Input);
		switch (Input)
		{
		case 1:printf("三子棋\n");
			game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("输入错误请重试\n");
			break;
		}	  
		 } while (Input);
}

int main()
{

	menu();
	test();

	return 0;
}