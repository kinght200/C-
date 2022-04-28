//
// Created by 17595 on 2022/4/14.
//

//#define定义常量和宏
//define是一个预处理指定

//1.define定义符号
//#define MAX 1000
#include <stdio.h>

//int main() {
//    printf("%d\n",MAX);
//    return 0;
//}

//2.define定义宏
#define ADD(x,y) ((x)+(y))
int main(){
    printf("%d\n", 4*ADD(2,3));//4*2+3=11
    return 0;
}
