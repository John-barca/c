#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"
void init_board(char arr[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void display_board(char arr[ROW][COL])
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		printf("%c |%c | %c\n", arr[i][0], arr[i][1], arr[i][2]);
		if (i < 2)
		{
			printf("--|--|--");
		}
		printf("\n");
	}
}
void player_chess(char arr[ROW][COL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		x--;
		y--;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = 'X';
			break;
		}
		else
		{
			printf("输入的坐标不正确，请重新输入\n");
			continue;
		}
	}
}
void computer_chess(char arr[ROW][COL])
{
	srand((unsigned)time(NULL));
	while (1)
	{
		int x = 0;
		int y = 0;
		srand((unsigned)time(NULL));
		x = rand() % 3;
		y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '0';
			break;
		}
		else
		{
			if (check_full(arr) == 0)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
}
int check_full(char arr[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char check_win(char arr[ROW][COL])
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < ROW; i++)
	{
		if ((arr[i][0] == arr[i][1]) && (arr[i][2] == arr[i][1]))
		{
				return arr[i][0];
		}
	}
	for (i = 0; i < COL; i++)
	{
		if ((arr[0][i] == arr[1][i]) && (arr[2][i] == arr[1][i]))
		{
			return arr[0][i];
		}
	}
	if ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]))
	{
		return arr[0][0];
	}
	if ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]))
	{
		return arr[0][2];
	}
	ret = check_full(arr);
	if (ret == 1)
	{
		return 'q';
	}
	return ' ';
}