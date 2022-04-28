//
// Created by 17595 on 2022/4/23.
//

//递归：一个过程或函数在其定义或说明中
// 直接或者间接调用自身的一种方法叫做递归
//主要思考方式：把大事化小

//两个必要条件：
//1。存在限制条件，当满足这个限制条件的时候，递归便不在继续
//2.每次递归调用之后越来越接近这个限制条件。


//写递归代码的时候：
//1.不能死递归，得有跳出条件，每次递归都要逼近跳出条件
//2.递归层次不能太深

//有一些功能：可以使用迭代的方式实现，也可以使用递归


#include <stdio.h>
#include <string.h>

//最简单的递归
//int main() {
//
//    printf("hehe\n");
//    main();
//
//    return 0;
//}

//递归实现输入：1234；输出：1 2 3 4
//void print(unsigned int n) {
//    if (n > 9) { //第一步
//        print(n / 10); //第二步
//    }
//    printf("%d", n % 10); //当n不在大于9的时候来到这条语句，然后往回走
//}
//
//int main() {
//    unsigned int num = 0;
//    scanf("%u", &num); // 1234
//    //递归 - 函数自己调用自己
//    print(num);//printf函数可以打印参数部分数字的每一位
//
//    return 0;
//}

//递归出现了栈溢出的现象
//void test(int n) {
//    if (n < 10000) {
//        test(n + 1);
//    }
//
//}
//
//int main() {
//    test(1);
//    return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char *str) {
//    int count = 0;//传统方法创建了临时变量，不可取
//    while (*str != '\0') {
//        count++;
//        str++;
//    }
//    return count;
//}

//int my_strlen(char *str){
//    if(*str != '\0'){
//        return 1+ my_strlen(str+1);
//    } else{
//        return 0;
//    }
//}
//
//int main() {
//    char arr[] = "bit";
//    //['b'] ['i'] ['t'] ['\0']
//    // 3个长度不算0
//    //模拟实现一个strlen函数
//    printf("%d\n", my_strlen(arr));
//    return 0;
//}

//n的阶乘
//方法1：传统方法
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int ret = 1;
//    //循环也叫做迭代
//    for (int i = 1; i <= n; i++) {
//        ret = ret * i;
//    }
//    printf("%d\n",ret);
//    return 0;
//}


//方法2：递归
//int Fac(int n) {
//    if (n <= 1) {
//        return 1;
//    } else {
//        return n * Fac(n - 1);
//    }
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fac(n);
//    printf("%d\n", ret);
//    return 0;
//}

//求第n个斐波那契数列

//int count = 0;
////递归可以求解，但是效率太低
//int Fib(int n) {
//    //统计第3个斐波那契数的计算机次数
//    if(n == 3){
//        count++;
//    }
//    if (n <= 2) {
//        return 1;
//    } else {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    printf("count = %d\n",count);
//    return 0;
//}

//用循环的方式来实现
int Fib(int n) {
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2) {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = Fib(n);

    printf("%d\n", ret);

    return 0;
}
