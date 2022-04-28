//
// Created by 17595 on 2022/4/22.
//


#include <stdio.h>
#include <math.h>

////传递调用
////通过地址，*pa就是a，a的值就是pa的值，*pb就是b，b的值就是pb的值
//void Swap2(int *pa, int *pb) {  //传址调用
//    int z = 0;
//    z = *pa;
//    *pa = *pb;
//    *pb = z;
//}
//
////Swap1在呗调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
////改变形参，不能改变实参
//void Swap1(int x, int y) {  //传值调用
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
//    Swap1(a,b);//传值调用
//    printf("交换前：a=%d b=%d\n", a, b);
//    Swap2(&a, &b);//传址调用
//    printf("交换后：a=%d b=%d\n", a, b);
//
//    return 0;
//}


//写一个函数去判断是否为素数
//int is_prime(int n) {
//    // 2->n-1 之间的数字
//    int j = 0;
//    for (int j = 2; j < sqrt(n); ++j) {
//        if (n % j == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    //100-200之间的素数
//    int i = 0;
//    int count = 0;
//    for (int i = 100; i <= 200; ++i) {
//        //判断i是否为素数
//        if (is_prime(i) == 1) {
//            count++;
//            printf("%d\n", i);
//        }
//    }
//    printf("\ncount = %d\n",count);
//    return 0;
//}

//is_leap_year
//如果判断是闰年返回1
//不是闰年，返回0

//一个函数如果不写返回类型，默认返回int类型

//int is_leap_year(int n) {
////1.被4整除，不能被100整除是闰年
////2.能被400整除是闰年
//    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
//
////最简洁版本
//int is_leap_year1(int n) {
////1.被4整除，不能被100整除是闰年
////2.能被400整除是闰年
//    return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
//}
//
////函数判断是否为闰年
//int main() {
//    int y = 0;
//    for (int y = 1000; y <= 2000; ++y) {
//        if (is_leap_year(y) == 1) {
//            printf("%d\n", y);
//        }
//    }
//    return 0;
//}


//写一个函数，实现一个整型有序数组的二分查找
int binary_search(int a[], int k, int s) {
    int left = 0;//左下标
    int right = s - 1;//右下标

    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] > k) {
            right = mid - 1;
        } else if (a[mid] < k) {
            left = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;//找不到了
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    //找到了就返回找到位置的下标
    //找不到返回-1
    int ret = binary_search(arr, key, sz);
    if (ret == -1) {
        printf("找不到\n");
    } else {
        printf("找到了，下标是:%d\n", ret);
    }
    return 0;
}

