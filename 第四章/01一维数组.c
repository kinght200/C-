//
// Created by 17595 on 2022/4/25.
//

//数组：一组数
//数组：一组相同类型元素的集合
//%p - 是按照地址的格式打印 - 十六进制的打印
//1.一维数组在内存中是连续存放的！
//2.随着数组下标的增长，地址是有低到高变化的！


#include <stdio.h>
#include <string.h>

//int main() {
////    int arr[8];
////    char ch[5];
//
////在大部分编译器不支持的情况下，还是写常量，C99标准支持
////    int n = 8;
////    int arr[n];
//
//    //int a = 10;//初始化
//    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//    //int arr1[10] = {1,2,3,4,5,};//不完全初始化，后位为0
//
//    //两式完全相同
//    //int arr2[] = {1,2,3,4,5};
//    //int arr3[5] = {1,2,3,4,5};
//
//    //char ch1[5] = {'b','i','t'};
//    //char ch2[] = {'b','i','t'};//没有规定长度，默认以后面的长度为准
//
//    //char ch3[5] = "bit";//b i t \0 0
//    //char ch4[] = "bit";//b i t \0
//
//    //对比一下两个数组有啥区别
//    char ch5[] = "bit";//[b i t \0]
//    char ch6[] = {'b', 'i', 't'};//[b i t]
//    //printf("%s\n", ch5);//bit
//    //printf("%s\n", ch6);//bitbit 没有找到\0后面会有随机值
//
//    //求响应的随机值
//    printf("%d\n",strlen(ch5));//3
//    printf("%d\n",strlen(ch6));//随机值
//    return 0;
//}

//int main() {
//    int arr[10] = {0};//初始化第一个元素为0，后面默认为0
//    arr[4] = 5;//[] - 下标引用操作符
////    printf("%d\n",arr[4]);//0
//    printf("%d\n", sizeof(arr));//40
//    printf("%d\n", sizeof(arr[0]));//4
//
//    int sz = sizeof(arr) / sizeof(arr[0]);//总大小（字节） / 第一个元素大小（字节）
//    for (int i = 0; i < sz; i++) {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}


//%p - 是按照地址的格式打印 - 十六进制的打印

//int main() {
////    printf("%x\n", 0x12);
////    printf("%p\n", 0x12);
//
//    int arr[10] = {0};
//    int i = 0;
//    for (int i = 0; i < 10; i++) {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = arr;//数组名是数组首元素的地址
    int i = 0;
    for (int i = 0; i < 10; i++) {
        printf("%d ",*p);
        p++;
    }//1 2 3 4 5 6 7 8 9 10 - 打印所有的元素
    return 0;
}

