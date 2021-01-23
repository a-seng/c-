#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define ROW 8
#define LOW 8

int map[ROW][LOW] =
{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 5, 0, 0, 1, 1, 1,
	1, 0, 0, 1, 0, 0, 1, 1,
	1, 0, 4, 7, 4, 0, 1, 1,
	1, 0, 0, 3, 0, 0, 1, 1,
	1, 1, 0, 3, 0, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1
};

int ShowMap()
{
	int count = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < LOW; j++)
		{
			switch (map[i][j])
			{
			case 1:
				printf("█");
				break;
			case 5:
			case 8:
				printf("※");
				break;
			case 4:
				printf("★");
				break;
			case 3:
				printf("☆");
				break;
			case 7:
				printf("☉");
				break;
			case 0:
				printf("  ");
				break;
			}
			if (map[i][j] == 3 || map[i][j] == 8)
				count = 1;
		}
		printf("\n");
	}	
	if (count == 1)
		return 0;
	return 1;
}

void Set()
{
	int i, j;
	for ( i = 0; i < ROW; i++)
	{
		for (j = 0; j < LOW; j++)
		{
			if (map[i][j] == 5 || map[i][j] == 8)
				break;
		}
		if (map[i][j] == 5 || map[i][j] == 8)
			break;
	}
	//键码值72 80 75 77
	char k = _getch();
	switch (k)
	{
	case 'W':
	case 'w':
	case 72:

		if (map[i - 1][j] == 0 || map[i - 1][j] == 3)
		{
			map[i - 1][j] += 5;		  
			map[i][j] -= 5;
		}
		else if (map[i - 1][j] == 4 || map[i - 1][j] == 7)
		{
			if (map[i - 2][j] == 0 || map[i - 2][j] == 3)
			{
				map[i][j] -= 5;
				map[i - 1][j] += 1;
				map[i - 2][j] += 4;
			}
		}
		break;
	case 'S':
	case 's':
	case 80:
		if (map[i + 1][j] == 0 || map[i + 1][j] == 3)
		{
			map[i + 1][j] += 5;
			map[i][j] -= 5;
		}
		else if (map[i + 1][j] == 4 || map[i + 1][j] == 7)
		{
			if (map[i + 2][j] == 0 || map[i + 2][j] == 3)
			{
				map[i][j] -= 5;
				map[i + 1][j] += 1;
				map[i + 2][j] += 4;
			}
		}
		break;
	case 'A':
	case 'a':
	case 75:
		if (map[i][j-1] == 0 || map[i][j-1] == 3)
		{
			map[i][j-1] += 5;
			map[i][j] -= 5;
		}
		else if (map[i][j - 1] == 4 || map[i][j - 1] == 7)
		{
			if (map[i][j-2] == 0 || map[i][j-2] == 3)
			{
				map[i][j] -= 5;
				map[i][j-1] += 1;
				map[i][j-2] += 4;
			}
		}
		break;
	case 'D':
	case 'd':
	case 77:
		if (map[i][j + 1] == 0 || map[i][j + 1] == 3)
		{
			map[i][j + 1] += 5;
			map[i][j] -= 5;
		}
		else if (map[i][j + 1] == 4 || map[i][j + 1] == 7)
		{
			if (map[i][j+ 2] == 0 || map[i][j + 2] == 3)
			{
				map[i][j] -= 5;
				map[i][j+ 1] += 1;
				map[i][j + 2] += 4;
			}
		}
		break;
	}

}

int main()
{
	int k = 0;
	while (1)
	{
		k = ShowMap();
		if (k == 1)
		{
			system("cls");
			printf("您获胜了\n");
			ShowMap();
			break;
		}
		Set();
		system("cls");		
	}
	system("pause");
	return 0;
}