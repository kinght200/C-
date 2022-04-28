//
// Created by 17595 on 2022/4/26.
//

//数组作为函数传参的时候：
//形参可以写成2种形式：
//1.数组形式
//2.指针形式


#include <stdio.h>


//冒泡排序思想：
//两两相邻的元素进行比较，并且可能的话需要交换

void bubble_sort(int arr[], int sz) { //形参arr本质上是指针
    //确定次数
    int i = 0;
    int flag = 1;
    for (i = 0; i < sz - 1; i++) {
        //一次冒泡排序的过程
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                //交换
                int tmp = arr[i];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 0;
            }
        }
        if (flag == 1) {
            break;
        }
    }
}

int main() {
    //int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //排序为升序 - 冒泡排序
    //1.计算数组元素个数
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);//数组传参的时候，传的其实是数组首元素的地址

    return 0;
}

//数组名是什么？
//数组名是数组首元素的地址
//但是有两个例外
//1.sizeof（数组名） - 表示整个数组 - 计算的是整个数组的大小（单位是字节）
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址


//int main() {
//    int arr[10] = {0};
//    int sz = sizeof(arr);//数组名表示整个数组
////    printf("%d\n", sz);
//    printf("%d\n", &arr);//1 - & 取出的是数组的地址
//
//    printf("%d\n", arr);//2
//    printf("%d\n", &arr[0]);//3
//
//    //数组名是首元素的地址
//    printf("%p\n", &arr[0]);//0xffffcc00
//    printf("%p\n", arr);//0xffffcc00
//    return 0;
//}

