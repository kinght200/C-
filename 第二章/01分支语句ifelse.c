//
// Created by 17595 on 2022/4/15.
//

//C语言是结构化的程序设计语言！
//C语言是如何表示真和假的呢？ - 非0就是真，0就是假
//语句：C语言中由一个分号 ; 隔开的结束一条语句
//顺序结构：
//1.ifelse语句
//注意：ifelse是匹配最近的ifelse（代码书写风格），和python不同


//选择结构
//循环结构

#include <stdio.h>

//int main() {
//    int age = 170;
//    if (age < 18)
//        printf("少年\n");
//    else if (age >= 18 && age < 26)
//        printf("青年\n");
//    else if (age >= 26 && age < 40)
//        printf("中年\n");
//    else if (age >= 40 && age < 60)
//        printf("壮年\n");
//    else if (age >= 60 && age < 100)
//        printf("老年\n");
//    else printf("老不死的\n");
//
////    if (age >= 18) {
////        printf("成年\n");
////    } else {
////        printf("未成年\n");
////        printf("不能谈恋爱\n");
////    }
//    return 0;
//}

//练习
//1.判断一个数是否为奇数
//2.输出1-100之间的奇数
int main() {
    int a = 0;
//    scanf("%d",&a);
    for (a = 1; a <= 100; a++) {
        if (a % 2 == 0) {
            printf("%d = 偶数\n",a);
        } else {
            printf("%d = 奇数\n",a);
        }
    }
}