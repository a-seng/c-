#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void Iniarr(char arr[ROWS][LOWS], int rows, int lows, char x)
{

	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < lows; j++)
		{
			arr[i][j] = x;
		}
	}
}

		
void disPlay(char board[ROWS][LOWS], int rows, int lows)
{
	int i = 0, j = 0;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= lows; j++)
			printf(" %c ", board[i][j]);
		printf("\n");
	}
}

SetMine(char board[ROWS][LOWS])
{
	int x, y, i = 0;
	for (i = 0; i < mineSum; i++)
	{	x = rand() % row+1;
		y = rand() % low+1;
		board[x][y] = '1';
	}
}

int  isAllowed(char arr[ROWS][LOWS],char show[ROWS][LOWS], int  m, int  n)
{
	if (show[m][n] == '*')
	if (arr[m][n] == '0')
		return 1;
	if (arr[m][n]=='1')
		return 9;
	return 0;
}

void search(char show[ROWS][LOWS], char arr[ROWS][LOWS], int m, int n)
{
	int i = 0, j = 0;
	int sum = 0;
	for (i = m - 1; i <= m + 1; i++)
	{
		for (j = n - 1; j <= n + 1; j++)
		if (arr[i][j] == '0')
			sum++;
	}
	if (sum == 9)
	{
		for (i = m - 1; i <= m + 1; i++)
		{
			for (j = n - 1; j <= n + 1; j++)
			{
				show[i][j] == ' ';
				if (i>=2  &&  i<=8  && j>=2  &&  j<=8)
				search(arr, show, i, j);
			}
		}
		
	}
	else
		show[m][n] = sum;
}

void setting(char show[ROWS][LOWS], char arr[ROWS][LOWS], int m, int n)
{
	int sum = 0;
	int i = m - 1, j = n - 1;
	for (i=m-1; i <= m + 1; i++)
	{
		for (j=n-1; j <= n + 1;j++)
		if (arr [i][j] =='0')
			sum++;
	}
	char c = '0' + sum;
	if (sum == 9)
	{
		if (m >= 2 && m <= 8 && n >= 2 && n <= 8)
			search(arr, show, m, n);
	}
	else
		show[m][n] =c;
}

int PlayerMove(char arr[ROWS][LOWS], char show[ROWS][LOWS])	 
{
	int m, n,i=1;
	while (1)
	{
		printf("请玩家输入:>\n");
		scanf("%d %d", &m, &n);
		if (m >= 1 && m <= row  &&  n <= 9 && n >= 1)
		{
			i = isAllowed(arr,show, m, n);
			if (i == 0)
				printf("该位置已被占用 请从新输入；》\n");
			else if (i == 9)
			{
				printf("不好意思 您被炸死了\n");
				return 9;
				break;
			}
			else {
				setting(show, arr, m, n);
				disPlay(show, row, low);
			}
		}
		if (i!=1)
		printf("输入错误 请从新输入");
	}	
}

int isWIn(char arr[ROWS][LOWS], char show[ROWS][LOWS])
{

	int i = 0, j = 0;
	int win = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= low;j++)
		if (show[i][j] != '*')
			win++;
	}
	return win;
}

void FindMine(char arr[ROWS][LOWS], char show[ROWS][LOWS])
{
	int i =1;
	int j = 0;
	while (i)
	{
		 j=PlayerMove(arr, show);
		 if (j == 9)
		 {
			 disPlay(arr, row, low);
			 break;
		 }
		i=isWIn(arr, show);
		disPlay(show, row, low);
		if (i == row*low - mineSum)
			printf("游戏结束 您赢了；》\n");
		break;
	}
	

}