#pragma once
#ifndef _GAME_H
#define _GAME_H

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3

void display_board(char arr[ROW][COL]);
void init_board(char arr[ROW][COL]);
void player_chess(char arr[ROW][COL]);
void computer_chess(char arr[ROW][COL]);
int check_full(char arr[ROW][COL]);
char check_win(char arr[ROW][COL]);

#endif // !_GAME_H



