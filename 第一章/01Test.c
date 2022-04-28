//
// Created by 17595 on 2022/4/13.
//

/*
 * 写代码
 * 1.写出主函数（main函数）
 * 100-500 代码
 * 如何执行？  - c语言是从主函数的第一行开始执行的
 * 所以C语言代码中得有main函数-入口
 */

//写个代码，在屏幕尚打印：你好
//printf - 库函数 - 在屏幕上打印信息的
//printf 的使用，也得打招呼（引用头文件 stdio.h）

//
#include <stdio.h>

static int g_val = 2022;//全局变量
int main()
{
    printf("你好！");
    return 0;
}

//static修饰函数
static int add(int x,int y){
    return x+y;
}