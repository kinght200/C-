//
// Created by 17595 on 2022/4/15.
//

//结构体 可以让C语言创建新的类型出来

//创建一个学生
struct Stu{
    char name[20];//成员变量
    int age;
    double score;
};

//创建一个书类型
struct Book{
    char name[20];
    float price;
    char id[30];
};

#include <stdio.h>

int main() {
    struct Stu s = {"张三",20,85.5};//结构体的创建和初始化
    printf("1:%s %d %lf\n",s.name,s.age,s.score);//结构体变量.成员变量

    struct Stu * ps = &s;
    printf("2:%s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);

    printf("3:%s %d %lf\n",ps->name,ps->age,ps->score);//3次结果是一致的，->含义：结构体指针->成员变量名
    return 0;
}
