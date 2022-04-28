//
// Created by 17595 on 2022/4/18.
//

//C语言提供了可以随意滥用的goto语句和标记跳转的标号
//理论上goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码
//goto 语句只能在一个函数范围内跳转，不能跨函数

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main() {
////    flag:
////        printf("hehe\n");
////        printf("haha\n");
////        goto flag;//无尽循环
//    return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！
//
//shutdown -s -t 60(电脑将在60秒后关机)
//shutdown -a(取消关机)


//int main() {
//    //关机
//    //C语言提供了一个函数：system() - 执行系统命令的
//    char input[20] = {0};//存放输入的信息
//    system("shutdown -s -t 60");//system - stdlib.h
//    again:
//    printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//    scanf("%s", input);//数字名本来就是一个地址
////    string.h
//    if (strcmp(input, "我是猪") == 0) { // 两个字符串比较是不能使用等号的，应该使用strcmp() string compare
//        system("shutdown -a");
//    } else {
//        goto again;
//    }
//
//    return 0;
//}

//goto 语句只能在一个函数范围内跳转，不能跨函数
//void test(){
//    flag:
//    printf("test\n");
//}
//int main(){
//    goto flag;
//    return 0;
//}

