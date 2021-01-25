#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<graphics.h>


int main()
{

	initgraph(640, 480);
	//rectangle(320, 240, 330, 250);
	//circle(320, 240, 160);
	//roundrect(100, 100, 200, 200, 100, 100);
	int x = 320, y = 60;
	int iSpeed = 0;
	while (1)
	{
		circle(x, y, 50);
	/*	x++;
		y++;*/
		//x++;
		//y++;
		Sleep(50);
		
		y += iSpeed++;
		if (y<50 || y>430)
		{
			iSpeed = -iSpeed;
		}
		cleardevice();
	}
	getchar();
	return 0;
}