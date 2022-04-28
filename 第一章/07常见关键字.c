//
// Created by 17595 on 2022/4/14.
//

//C语言提供的常见关键字：
//1.C语言提供的，不能自己创建关键字
//2.变量名不能是关键字

//auto是自动的 - 每个局部变量都是auto修饰的
//extern 是用来声明外部符号的
//register 寄存器关键字
//sigend 有符号的 10 -20
//unsigend 无符号的
//static 静态的
//union 联合体（共用体）
//void 空-无
//typedef 类型定义（类型重定义）
//

#include <stdio.h>

//register关键字
//int main() {
//    //大量/频繁被使用的数据，想放在寄存器中，提升效率
//    register int num = 10;//建议num的值存放在寄存器中
//    return 0;
//}

////类型重定义
//typedef unsigned int u_int;
//int main() {
//    unsigned int num = 100;
//    u_int num2 = 100;
//    return 0;
//}


//static - 静态的
//特点：
// static修饰局部变量，改变了局部变量的生命周期（本质尚是改变了变量的存储类型）

//1.static修饰局部变量
//void test(){
//    static int a = 1;
//    a++;
//    printf("%d\n",a);//2 3 4 5 6 7 8 9 10 11
//}
//
//int main(){
//    int i = 0;
//    while (i<10){
//        test();
//        i++;
//    }
//    return 0;
//}

//extern 用来声明外部符号的
extern int g_val;
//2.static修饰全局变量,使得这个全局变量只能在自己所在的源文件(.c)内部可以使用，其他源文件不能使用
//全局变量，在其他源文件内部可以被使用，是应为全局变量具有外部链接属性
//但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了！！！

//3.static修饰函数
//本质上：static是将函数的外部链接属性变成了内部链接属性（和static修饰全局变量一样）
extern int add(int x,int y);
int main(){
//    printf("%d\n",g_val);
    int a = 10;
    int b =20 ;
    int sum = add(a,b);
    printf("sum = %d\n",sum);
    return 0;

}

