#define _CRT_SECURE_NO_WARNINGS 1


#include"������.h"

void menu()
{
	printf("�����룺��\n");
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
		printf("����Ӯ\n");
	if (ret == '*')
		printf("���Ӯ\n");
	else
		printf("ƽ��\n");
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
		case 1:printf("������\n");
			game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:printf("�������������\n");
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