//
// Created by 17595 on 2022/4/13.
//

/* C语言怎么描述：
 * 常量 - 不能改变的量
 * 变量 - 能被改变的量
 *
 * 变量的分类：
 * 局部变量
 * 全局变量
 */

#include <stdio.h>

//int main()
//{
//    // 创建的一个变量
//    // 类型 - 变量的名字 = 0；
//    // 类型 - 变量的名字；//不推荐
//    int age = 20;
//    double  weight = 65.0;
//
//    age = age+1;
//    weight = weight -10;
//    printf("%d\n",age);
//    printf("%lf\n",weight);
//    return 0;
//}
// %d - 整型
// %f - float
// %lf -double


//全局变量 - {}外部定义的
//int a = 100;
//
//int main()
//{
//    //局部变量 - {}内部定义的
//    //当局部变量和全局变量名字冲突的情况下，局部优先
//    //不建议吧全局变量和局部变量的名字，写成一样的
//    int a = 10;
//
//    printf("%d\n",a);
//    return 0;
//}


// 写一个代码求2个整数的和
//scanf函数是输入函数
//int main() {
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    scanf("%d %d", &a, &b);
//    sum = a + b;
//    printf("sum = %d\n",sum);
//    return 0;
//}


// 变量的作用域和生命周期
// 局部变量的作用域：就是变量所在的局部范围
// 全局变量的作用域：

//int g_val = 2022;//全局变量
//int main() {
//    printf("1:%d\n", g_val);
//    {
//        printf("2:%d\n", g_val);
//        int a = 10;
//        printf("a = %d\n", a);
//    }
//    printf("3:%d\n",g_val);
//    return 0;
//}

//}

//变量的声明周期：变量的创建和销毁之间的时间段

//}


//声明一下变量
//extern int g_val;
////告诉一下这个类在另外一个类中创建的变量，现在引用
//int main()
//{
//    printf("%d\n",g_val);
//    return 0;
//生命周期
//局部变量的生命周期：进入所在的局部范围，生命开始；出局部范围，生命周期结束。
//全局变量的生命周期：程序的生命周期
//int main()
//{
//    {
//        int a = 10;
//        printf("%d\n",a);
//    }
//    return 0;



//常量分类：

#define MAX 10000
//int main()
//{
//    //1.字面常量
////    3.14;
////    10;
////    'a';
////    "abcdef";
//
//    //2.const修饰的常变量
//    //const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//    //num = 20;
//    //printf("num = %d\n",num);//20
//    //int arr[10] = {0};//10个元素
//    //const int n = 10;
//    //int arr2 = [n] = {0};//n是变量，这里是不行
//
//    //3. #define 定义的标识符常量
//    //MAX = 20000 //错误，因为已经被define定义为了常量，不能改变
//    int n = MAX;
//    printf("n = %d\n",n); //n = 10000
//
//    return 0;
//}



//性别
enum Sex{
    //这种枚举类型的变量的未来可能取值
    //枚举常量
    MALE = 3,//赋初值
    FEMALE,
    SECRET
};

//枚举常量默认值是从0开始
int main()
{
    //4.枚举常量
    //可以一一列举的常量
    enum Sex s = MALE;
    printf("%d\n",MALE);//0
    printf("%d\n",FEMALE);//1
    printf("%d\n",SECRET);//2

    return 0;
}