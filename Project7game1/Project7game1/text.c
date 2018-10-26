#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("*****    1. play     *****\n");
	printf("*****    2. exit     *****\n");
	printf("**************************\n");
}
void text()
{
	char arr[ROW][COL] = { 0 };
	int input = 1;
	while (input)
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1: {
			char ret = 0;
			init_board(arr);
			do {
				display_board(arr);
				player_chess(arr);
				display_board(arr);
				if (check_win(arr) != ' ')
				{
					ret = check_win(arr);
					break;
				}
				computer_chess(arr);
				ret = check_win(arr);
			} while (ret == ' ');
			display_board(arr);
			if (ret == 'X')
			{
				printf("玩家赢\n");
			}
			else if (ret == '0')
			{
				printf("电脑赢\n");
			}
			else if (ret == 'q')
			{
				printf("游戏平局\n");
			}
		}
				break;
		case 0:
			break;
		}
	}
}
int main()
{
	text();
	system("pause");
	return 0;
}