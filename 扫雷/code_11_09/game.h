#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS


#define row 12
#define col 12
#define COUNT 10//棋盘中设置雷的个数
extern char show_mine[row][col];//展示数组
extern char real_mine[row][col];//布雷数组

void menu();//菜单函数
void init_mine();//初始化数组函数
void set_mine();//布雷函数
int count_mine(int x,int y);//统计周围雷的个数
void print_player();//打印玩家棋盘
void print_mine();//打印设计者棋盘

int sweep_mine();//扫雷函数
void safe_mine();//避免第一次被雷炸死函数
void open_mine(int x, int y);//展开函数
int count_show_mine();//判断玩家剩余未知区域个数函数



#endif //_GAME_H_