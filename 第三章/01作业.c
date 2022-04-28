//
// Created by 17595 on 2022/4/24.
//


#include <stdio.h>
#include <string.h>

//1.计算1-100的所有整数中出现多少个数字9
//个位为9 十位为9
//int main() {
//    int i = 0;
//    int count = 0;
//    for (int i = 1; i <= 100; i++) {
//        if (i % 10 == 9) {
//            count++;
//        }
//        if (i / 10 == 9) {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5.....+1/99-1/100的值
// 打印结果

//int main() {
//    int i = 0;
//    double sum = 0;//需要产生小数，所以定义为双精度
//    int flag = 1;
//    for (int i = 1; i <= 100; i++) {
//        sum += flag * 1.0 / i;
//        flag = -flag;
//    }
//    printf("%lf\n", sum);
//
//    return 0;
//}

//求10个整数中最大值

//int main() {
//    int i = 0;
//    int arr[10] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
//    int max = arr[0];
//
//    for (int i = 0; i < 10; ++i) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    printf("%d\n", max);
//
//    return 0;
//}

//输出9*9乘法表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//......

//int main() {
//    int i = 1;
//    //行数
//    for (int i = 1; i <= 9; i++) {
//        //打印一行
//        int j = 0;
//        for (int j = 1; j <= i; j++) {
//            printf("%d*%d=%-2d ", i, j, i * j);//-2左对齐
//        }
//        printf("\n");
//    }
//    return 0;
//}

//打印乘法口诀表，口诀表的行数和列数自己决定
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//......

//void print_table(int n) {
//    int i = 0;
//    //行
//    for (int i = 1; i <= n; i++) {
//        //打印一行
//        int j = 0;
//        for (int j = 1; j <= i; j++) {
//            printf("%d*%d=%d ", i, j, i * j);
//        }
//        printf("\n");
//    }
//}
//
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);//9
//    //函数
//    print_table(n);
//    //函数的起名是非常关键，名字最好能体现函数的功能
//    return 0;
//}

//int Fun(int n) {
//    if (n == 5) {
//        return 2;
//    } else {
//        return 2 * Fun(n + 1);
//    }
//}
//
//int main() {
////    Fun(2);
//    printf("%d\n", Fun(2));
//    return 0;
//}

//递归方式得到相反字符串
//方法1：非递归方式
//int my_strlen(char *str) {
//    int count = 0;
//    while (*str != '\0') {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//void reverse_string(char *str) {
//    int left = 0;
//    int right = my_strlen(str) - 1;
//
//    while (left < right) {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//
//int main() {
//    char arr[] = "abcdef";
//    reverse_string(arr);//数组名arr是数组arr首元素的地址
//    printf("%s\n", arr);//fedcba
//    return 0;
//}

//方法2：递归

//int my_strlen(char *str) {
//    int count = 0;
//    while (*str != '\0') {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//void reverse_string(char *str) {
//    char tmp = *str;
//    int len = my_strlen(str);//求字符串总长度
//    *str = *(str + len - 1);//把最后一个字符发到第一个去
//    *(str + len - 1) = '\0';//把刚刚拿走的那个字符填充为\0
//    //判断条件
//    if (my_strlen(str + 1) >= 2) {
//        reverse_string(str + 1);
//    }//重复中间的字符变换
//    *(str + len - 1) = tmp;//把第一个字符放到最后去
//}
//
//
//int main() {
//    char arr[] = "abcdef";
//    reverse_string(arr);//数组名arr是数组arr首元素的地址
//    printf("%s\n", arr);//fedcba
//    return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，
// 返回组成它的数字之和
//int DigitSum(int n) {
//    if (n > 9) {
//        return DigitSum(n / 10) + n % 10;
//    } else{
//        return n;
//    }
//}
//
//
//int main() {
//    int num = 1729;
//    int sum = DigitSum(num);
//    printf("%d\n", sum);
//    return 0;
//}

//编写一个函数实现n的k次方，使用递归实现
double Pow(int n, int k) {

    if (k == 0) {
        return 1.0;
    } else if (k > 0) {
        return n * Pow(n, k - 1);
    } else {
        return 1.0 / (Pow(n, -k));
    }
}

int main() {
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    double ret = Pow(n, k);
    printf("%lf\n", ret);
    return 0;
}

