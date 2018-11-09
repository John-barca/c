#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
double start, finish;
void game()
{
	int ret = 0;
	init_mine();//初始化玩家和设计者棋盘
	set_mine();//给设计者棋盘布雷
	print_mine();//打印设计者棋盘
	printf("----------------------------------\n");
	print_player();//打印玩家棋盘
	start = clock();
	safe_mine();

	if (count_show_mine() == COUNT)//一步就赢的情况
	{
		print_mine();
		printf("玩家赢!!!\n\n");
		return;
	}
	print_player();//打印玩家棋盘
	while (1)//循环扫雷
	{
		int ret = sweep_mine();//扫雷，踩到雷返回1，没踩到返回0
		if (count_show_mine() == COUNT)//剩余区域个数为雷数扫雷胜利
		{
			print_mine();//打印设计者棋盘
			printf("玩家赢！！！\n\n");
			finish = clock();//取结束时间
			printf("用时%d秒\n", (int)(finish - start) / CLOCKS_PER_SEC);
			break;
		}
		if (ret)//判断是否踩到雷
		{
			printf("被雷炸死\t");
			finish = clock();//取结束时间
			printf("用时%d秒\n", (int)(finish - start) / CLOCKS_PER_SEC);
			print_mine();//打印设计者雷阵查看部署
			break;
		}
		print_player();//打印玩家棋盘
	}
}
int main()
{
	srand((unsigned int)time(NULL));//产生随机数生成器
	int input = 0;
	menu();//菜单
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("开始游戏\n");
			game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
		menu();
		printf("continue?\n");
	} while (input);
	system("pause");
	return 0;
}