//
// Created by 17595 on 2022/4/14.
//


#include <stdio.h>

//选择语句
//int main()
//{
//    int input = 0;//输入的值
//    printf("好好学习:>\n");
//    printf("不好好学习:(1/0)?>:");
//    scanf("%d",&input);
//    if(input == 1) {
//        printf("好\n");
//    }
//    else {
//        printf("打工\n");
//    }
//    return 0;
//}

//循环语句
int main()
{
    int line = 0;
    while (line<30000){
        printf("写代码:%d\n",line);
        line++;
    }
    if(line == 30000){
        printf("好\n");
    }

    return 0;
}