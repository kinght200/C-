//
// Created by 17595 on 2022/4/16.
//

//do...while()循环
//语法：
//do
//   循环语句
//while(表达式);

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//int main() {
//
//    int i = 1;
//    do {
//        if(i == 5){
//            continue;
//        }
//        printf("%d", i);//continue死循环,break到5终止
//        i++;
//    } while (i <= 10);
//    return 0;
//}

//练习
//1.计算n的阶乘
//int main(){
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    //1*2*3*4*5 = 120
//    scanf("%d",&n);
//    for (int i = 1; i <= n; ++i) {
//        ret *= i;
//    }
//    printf("%d\n",ret);
//    return 0;
//}

//2.计算1！+2！+3！+....+10!
//int main() {
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    //1！+2！+3！ = 1+2+6 = 9
//    //方法1：
////    for (n = 1; n <=3 ; ++n) {
////        ret = 1;//计算n的阶乘之前，把ret初始化为1
////        for (i = 1; i <= n; ++i) {
////            ret *= i;
////        }
////        sum += ret;
////    }
////    printf("%d\n",sum);
//
//    //方法2：
//    //3！ = 3*2*1
//    //2！ = 2*1
//    for (int n = 0; n < = 3; ++n) {
//        ret *= n;
//        sum += ret;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

//3.查找一组有序数组中n的下标
//方法：二分查找（折半查找）
//int main() {
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int k = 7;//要查找的数字
//    //在arr这个有序的数组中查找k（7）的值
//    //1.确定这个数组的左下标和右下标
//    int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//    int left = 0;
//    int right = sz - 1;
//    //2.找出这个数组的平均值下标
//    //3.比较平均值下标的对应数组元素和需要查找的数字,然后循环
//    while (left <= right) {
//        int mid = (left + right) / 2;
//        if (arr[mid] < k) {
//            left = mid + 1;
//        } else if (arr[mid] > k) {
//            right = mid - 1;
//        } else {
//            printf("找到了,下标是:%d\n", mid);
//            break;
//        }
//    }
//    if (left > right) {
//        printf("找不到\n");
//    }
//    return 0;
//}

//4.编写代码，演示多个字符从两端移动，向中间汇聚
//welcome to bit!!!!!!
//w##################!
//we################!!
//....
//welcome to bit!!!!!!

//int main() {
//    char arr1[] = "welcome to bit!!!!!!";
//    char arr2[] = "####################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//
//    while (left <= right) {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1);//睡眠一秒钟
//        system("cls");//清空屏幕
//        left++;
//        right--;
//    }
//    printf("%s\n",arr2);
//    return 0;
//}

//5.模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序）
//int main() {
//     int i = 0;
//    //假设正确的密码是字符串”123456“
//    char password[20] = {0};
//    for (int i = 0; i < 3; ++i) {
//        printf("请输入密码:");
//        scanf("%s", password);
////        if (password == "123456"){//错误的，两个字符串比较，不能使用==，应该使用strcmp}
//        if (strcmp(password, "123456") == 0) {
//            printf("登录成功\n");
//            break;
//        } else{
//            printf("密码错误，重新输入\n");
//        }
//    }
//    //3次密码都错了，来这
//    if (i == 3) {
//        printf("3次密码均错误，退出程序\n");
//    }
//    return 0;
//}

//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//a.猜对了，就恭喜你，游戏结束
//b.你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3.游戏一直玩，除非退出游戏
//

void menu() {
    printf("**************************\n");
    printf("*********  1.play  *******\n");
    printf("*********  0.exit  *******\n");
    printf("**************************\n");
}

void game() {
    //猜数字游戏的实现
    //1.生成随机数
    //rand函数返回了一个0-32767之间的数字
    //在srand中传入一个时间戳，因为时间戳是一直在变化的
    int ret = rand() % 100 + 1;//%100的余数是0-99，然后+1，范围就是1-100
    printf("随机数:%d\n", ret);

    //2.猜数字
    int guess = 0;
    while (1) {
        printf("请猜数字");
        scanf("%d", &guess);
        if (guess < ret) {
            printf("猜小了\n");
        } else if (guess > ret) {
            printf("猜大了\n");
        } else{
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}

int main() {
    int input = 0;
    srand((unsigned int) time(NULL));

    do {
        menu();//打印菜单
        printf("请选择:");
        scanf("%d", &input);
        switch (input) {
            case 1: {
                game();
                printf("猜数字\n");
                break;
            }
            case 0: {
                printf("退出游戏\n");
                break;
            }
            default: {
                printf("选择错误，请重新选择\n");
                break;
            }

        }
    } while (input);
    return 0;
}


