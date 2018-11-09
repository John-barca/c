#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


char show_mine[row][col] = { 0 };
char real_mine[row][col] = { 0 };

void menu()
{
	printf("****************************\n");
	printf("******     1. play   *******\n");
	printf("******     0. exit   *******\n");
	printf("****************************\n");
}

void init_mine()//对两个棋盘进行初始化
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			show_mine[i][j] = '*';
			real_mine[i][j] = '0';
		}
	}
}

void print_player()//打印玩家棋盘
{
	int i = 0;
	int j = 0;
	printf("0 ");
	for (i = 1; i < row - 1; i++)
	{
		printf("%d ", i);//横标1-10
	}
	printf("\n");
	for (i = 1; i < row - 2; i++)//竖标1-10
	{
		printf("%d ", i);
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", show_mine[i][j]);//玩家数组棋盘
		}
		printf("\n");
	}
	printf("10");//打印最后一行
	for (i = 1; i < row - 1; i++)
	{
		printf("%c ", show_mine[10][i]);
	}
	printf("\n");
}

void print_mine()
{
	int i = 0;
	int j = 0;
	printf("0 ");
	for (i = 1; i < row - 1; i++)
	{
		printf("%d ", i);//打印横坐标
	}
	printf("\n");
	for (i = 1; i < row - 2; i++)
	{
		printf("%d ", i);//打印竖标
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", real_mine[i][j]);
		}
		printf("\n");
	}
	printf("10");//打印最后一行
	for (i = 1; i < row - 1; i++)
	{
		printf("%c ", real_mine[10][i]);
	}
	printf("\n");
}

void set_mine()//设计者棋盘布雷
{
	int x = 0;
	int y = 0;
	int count = COUNT;//设置雷的数量
	while (count)//布完后跳出循环
	{
		int x = rand() % 10 + 1;//产生1-10的随机数，在数组1-10的下标布雷
		int y = rand() % 10 + 1;
		if (real_mine[x][y] == '0')//找不是雷的地方布雷
		{
			real_mine[x][y] = '1';
			count--;
		}
	}
}

int count_mine(int x, int y)//检测周围8个区域雷的个数
{
	int count = 0;
	if (real_mine[x - 1][y - 1] == '1')
	{
		count++;
	}
	if (real_mine[x - 1][y] == '1')
	{
		count++;
	}
	if (real_mine[x - 1][y + 1] == '1')
	{
		count++;
	}
	if (real_mine[x][y - 1] == '1')
	{
		count++;
	}
	if (real_mine[x][y + 1] == '1')
	{
		count++;
	}
	if (real_mine[x + 1][y - 1] == '1')
	{
		count++;
	}
	if (real_mine[x + 1][y] == '1')
	{
		count++;
	}
	if (real_mine[x + 1][y + 1] == '1')
	{
		count++;
	}
	return count;
}

void safe_mine()//避免第一次被炸死
{
	int x = 0;
	int y = 0;
	char ch = 0;
	int count = 0;
	int ret = 1;
	printf("输入坐标扫雷\n");
	while (1)
	{
		scanf("%d%d", &x, &y);//只能输入1到10，输入错误重新输入
		if ((x >= 1 && x <= 10) && (y >= 1 && y <= 10))
		{
			if (real_mine[x][y] == '1')//第一踩到雷补救
			{
				real_mine[x][y] = '0';
				char ch = count_mine(x, y);
				show_mine[x][y] = ch + '0';
				open_mine(x, y);
				while (ret)//在其余有空的地方设置雷
				{
					int x = rand() % 10 + 1;//产生随机数，在数组下标1到10范围内布雷
					int y = rand() % 10 + 1;
					if (real_mine[x][y] == '0')
					{
						real_mine[x][y] = '1';
						ret--;
						break;
					}
				}
				break;//跳出此函数
			}
			if (real_mine[x][y] == '0')
			{
				char ch = count_mine(x, y);
				show_mine[x][y] = ch + '0';
				open_mine(x, y);
				break;
			}
		}
		else//输入坐标错误
		{
			printf("输入错误重新输入：\n");
		}
	}
}

int sweep_mine()//扫雷函数，踩雷返回1，没踩到返回0
{
	int x = 0;
	int y = 0;
	int count = 0;
	printf("输入坐标扫雷\n");
	scanf("%d%d", &x, &y);//输入1到10
	if ((x >= 1 && x <= 10) && (y >= 1 && y <= 10))
	{
		if (real_mine[x][y] == '0')//没踩到雷
		{
			char ch = count_mine( x , y );
			show_mine[x][y] = ch + '0';
			open_mine(x, y);
			if (count_show_mine() == COUNT)//判断剩余未知区域个数，个数为雷数时玩家赢
			{
				print_mine();
				printf("玩家赢!!\n\n");
				return 0;
			}
		}
		else if (real_mine[x][y] == '1')//踩到雷
		{
			return 1;
		}
	}
	else
	{
		printf("输入错误重新输入：\n");
	}
	return 0;//没踩到雷
}

void open_mine(int x, int y)//坐标周围展开函数
{
	if (real_mine[x - 1][y - 1] == '0')
	{
		show_mine[x - 1][y - 1] = count_mine(x - 1, y - 1) + '0';//显示该坐标周围雷数
	}
	if (real_mine[x - 1][y] == '0')
	{
		show_mine[x - 1][y] = count_mine(x - 1, y) + '0';
	}
	if (real_mine[x - 1][y + 1] == '0')
	{
		show_mine[x - 1][y + 1] = count_mine(x - 1, y + 1) + '0';
	}
	if (real_mine[x][y - 1] == '0')
	{
		show_mine[x][y - 1] = count_mine(x, y - 1) + '0';
	}
	if (real_mine[x][y + 1] == '0')
	{
		show_mine[x][y + 1] = count_mine(x, y + 1) + '0';
	}
	if (real_mine[x + 1][y - 1] == '0')
	{
		show_mine[x + 1][y - 1] = count_mine(x + 1, y - 1) + '0';
	}
	if (real_mine[x + 1][y] == '0')
	{
		show_mine[x + 1][y] = count_mine(x + 1, y) + '0';
	}
	if (real_mine[x + 1][y + 1] == '0')
	{
		show_mine[x + 1][y + 1] = count_mine(x + 1, y + 1) + '0';
	}
}

int count_show_mine()//判断剩余区域的个数，当个数为雷数时玩家赢
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row - 2; i++)
	{
		for (j = 1; j <= col - 2; j++)
		{
			if (show_mine[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}