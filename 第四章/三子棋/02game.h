//
// Created by 17595 on 2022/4/26.
//

#ifndef CPROJECT_02GAME_H
#define CPROJECT_02GAME_H

#endif //CPROJECT_02GAME_H

//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘的
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏输赢
//1.玩家赢了 - *
//2.电脑赢了 - #
//3.平局 - Q
//4.游戏继续 - C
char IsWin(char board[ROW][COL],int row,int col);