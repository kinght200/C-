//
// Created by 17595 on 2022/4/18.
//

//维基百科中对函数的定义：子程序
//特点：一般会有输入参数并有返回值，提供对过程的封装和细节的隐藏。这些代码通常被集成为软件库
//C语言中函数的分类:
//1.库函数 - 函数的返回类型 函数名(函数的参数)
//2.自定义函数



#include <stdio.h>
#include <string.h>

//1.库函数
//strcpy函数
//int main() {
//    char arr1[20] = {};
//    char arr2[] = "hello bit";
//    strcpy(arr1,arr2);
//    printf("%s",arr1);//打印arr1这个字符串， %s - 以字符产的格式来打印
//
//    return 0;
//}

////memory函数
//int main(){
//    char arr[] = "hello bit";
//    memset(arr,'x',5);
//    printf("%s\n",arr);
//    return 0;
//}

//2.写一个函数找出两个整数中的最大值
//int get_max(int x,int y){
//    int z = 0;
//    if(x>y){
//        z = x;
//    } else{
//        z = y;
//    }
//    return z;//返回z - 返回较大值
//}
//
//
//
//int main(){
//    int a = 10;
//    int b = 20;
//    //函数的调用
//    int max = get_max(a,b);
//
//    printf("max = %d\n",max);
//    return 0;
//}

//交换两个整型的内容
//函数返回类型的地方写成：void，表示这个函数不反悔任何值，也不需要返回
//函数出错了
//void Swap1(int x, int y) {
//    int z = 0;
//    //变量传递过来了，但是地址是新的，所以并不会交换a和b
//    z = x;
//    x = y;
//    y = z;
//}
//
//int main() {
//    int a = 10;
//    int b = 20;
//    //写一个函数，交换两个整型变量的值
//    printf("交换前：a=%d b=%d\n", a, b);
//    Swap1(a, b);
//    printf("交换后：a=%d b=%d\n", a, b);
//
//    return 0;
//}

//指针复习
//int main() {
//    int a = 10;//4个字节的空间
//    int *pa = &a;//pa就是一个指针变量
//    *pa = 20;
//    printf("%d\n", a);
//    return 0;
//}

//通过地址，*pa就是a，a的值就是pa的值，*pb就是b，b的值就是pb的值
void Swap2(int *pa, int *pb) {
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}

int main() {
    int a = 10;
    int b = 20;
    //写一个函数，交换两个整型变量的值
    printf("交换前：a=%d b=%d\n", a, b);
    Swap2(&a, &b);
    printf("交换后：a=%d b=%d\n", a, b);

    return 0;
}

