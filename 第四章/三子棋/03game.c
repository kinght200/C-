//
// Created by 17595 on 2022/4/26.
//


#include "02game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col) {

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            board[i][j] = ' ';
        }
    }
}

//void DisplayBoard(char board[ROW][COL], int row, int col) {
//    for (int i = 0; i < row; ++i) {
//        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//        if (i < row - 1) {
//            printf("---|---|---|\n");
//        }
//    }
//} //函数不够通用

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf(" %c ", board[i][j]);
            if (i < col - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < row - 1) {
            //printf("---|---|---|\n");
            for (int j = 0; j < col; ++j) {
                printf("---");
                if (j < col - 1) {
                    printf("|");
                }
            }
            printf("\n");
        }
    }

}

//玩家下棋
void PlayerMove(char board[][COL], int row, int col) {
    int x = 0;
    int y = 0;
    printf("玩家走：\n");
    while (1) {
        printf("请输入下棋的坐标:");
        scanf("%d %d", &x, &y);
        //判断坐标合法性
        if (x >= 1 && x <= row & y >= 1 & y <= col) {
            //下棋
            //判断坐标是否被占用
            if (board[x - 1][y - 1] == ' ') {
                board[x - 1][y - 1] = '*';
                break;
            } else {
                printf("坐标已被占用，请重新输入\n");
            }
        } else {
            printf("坐标非法，请重新输入\n");
        }
    }
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col) {
    printf("电脑走:");
    while (1) {
        int x = rand() % row;
        int y = rand() % col;
        //判断占用
        if (board[x][y] == ' ') {
            board[x][y] = '#';
            break;
        }
    }
}

//判断游戏输赢
int IsFull(char board[ROW][COL],int row,int col){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (board[i][j] == ' '){
                return 0;//棋盘没满
            }
        }
    }
    return 1;//棋盘满了
}



char IsWin(char board[ROW][COL], int row, int col) {
    int i = 0;
    //判断三行
    for (i = 0; i < row; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
            return board[i][1];
        }
    }
    //判断三列
    for (int i = 0; i < col; ++i) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
            return board[1][i];
        }
    }

    //判断对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
        return board[1][1];
    }

    //判断平局
    //如果棋盘满了返回1.不满返回0
    int ret = IsFull(board,row,col);
    if (ret = 1){
        return 'Q';
    }
    //继续
    return 'C';
}
