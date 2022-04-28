/*
 * 数据类型
 * 计算机语言 - 写程序 - 解决生活中的问题
 * 购物商城 - 上架商品，价格 - 15.6元 - 小数（浮点数）
 * 年龄 - 40 （整型）

 * char - 字符数据类型
 * short - 短整型
 * int - 整型
 * long - 长整型
 * long long - 更长的整型
 * float - 单精度浮点数
 * double - 双精度浮点数

 *C语言有没有字符串类型？
 *
*/


#include<stdio.h>
int main()
{
    //字符类型
    char ch = 'a';
    //整型
    int age = 20;
    //短整型
    short num = 10;
    //长整型
    long a = 100;
    //长长整型
    //long long = 200;
    //单精度浮点型
    float weight = 55.5;
    //双精度浮点型
    double d = 0.0;

    printf("%d\n",100);// 打印一个整数 - %d
    printf("%d\n",sizeof(char)); //  1 // sizeof - 关键字 - 操作符 - 计算类型或变量所占空间的大小
    printf("%d\n",sizeof(short)); // 2
    printf("%d\n",sizeof(int)); // 4
    printf("%d\n",sizeof(long)); // 8 C语言标准中sizeof(long) >= sizeof(int)就可以
    printf("%d\n",sizeof(long long)); // 8
    printf("%d\n",sizeof(float)); // 4
    printf("%d\n",sizeof(double));// 8
    return 0;
}

/*
 *sizeof的计算单位是什么？ - 字节byte
 * 计算机中的单位：
 * bit - 比特位
 * byte - 字节 = 8bit
 * kb = 1024byte
 * mb = 1024kb
 * gb = 1024mb
 * tb = 1024gb
 * pb = 1024tb
 */