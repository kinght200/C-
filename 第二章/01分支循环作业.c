//
// Created by 17595 on 2022/4/18.
//

//总结：
//1，下课总结
//2.模仿代码，思考，脱离别人的代码自己写
//3.学会调试代码，感受代码的执行


#include <stdio.h>
#include <math.h>

//第一题
//int main() {
//    int i = 0;
//    for (int i = 0; i < 10; ++i) {
//        if (i = 5) { //5赋值给i，所以i一直都是5<10,所以打印为5（死循环）
//            printf("%d", i);
//        }
//    }
//    return 0;
//}

//第四题
//int func(int a) {
//    int b;
//    switch (a) {
//        case 1:
//            b = 30;
//        case 2:
//            b = 20;
//        case 3:
//            b = 16;
//        default:
//            b = 0;
//    }//没有break所以会一直走到底。b=0
//    return b;
//}
//int main(){
//    printf("%d\n", func(1));
//    return 0;
//}

//第六题
//int main() {
//    int x = 3;
//    int y = 3;
//    switch (x % 2) {
//        case 1:
//            switch (y) {
//                case 0:
//                    printf("first");
//                case 1:
//                    printf("second");
//                    break;
//                default:
//                    printf("hello");
//            }
//        case 2:
//            printf("third");
//    }
//    return 0;
//}

//第七题
//写代码将三个整数按从大到小输出
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    //输入数据
//    scanf("%d %d %d", &a, &b, &c);
//    //调整顺序
//    if (a < b) {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c) {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c) {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//    //输出-从大到小
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}

//打印1-100之间所有3的倍数
//int main(){
////    for (int i = 1; i < 101; ++i) {
////        //判断i是否为3的倍数
////        if(i%3==0){
////            printf("这是3的倍数:%d\n",i);
////        }
////    }
//    for (int i = 3; i <101 ; i+=3) {
//        printf("%d\n",i);
//    }
//    return 0;
//}

//给定两个数，求这个两个数的最大公约数
//方法1：
//int main() {
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);//24 18
//    int max = 0;
//    //假设最大公约数max就是m和n的较小值
//    if (m > n) {
//        max = n;
//    } else {
//        max = m;
//    }
//    while (1) {
//        if (m % max == 0 && n % max == 0){
//            printf("最大公约数是:%d\n",max);
//            break;
//        }
//        max--;
//    }
//
//    return 0;
//}

//方法2：辗转相除法
//int main() {
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);//24 18
//    int t = 0;
//    while (t = m % n) {
//        m = n;
//        n = t;
//    }
//    printf("最大公约数为:%d\n",n);
//
//    //最小公倍数 = m*n/最大公约数
//
//    return 0;
//}
//打印1000年到2000年之间的闰年
//int main() {
//    int y = 0;
//    int count = 0;
//    for (y = 1000; y <= 2000; y++) {
//判断y是不是闰年
//1.被4整除，不能被100整除是闰年
//2.能被400整除是闰年
//        if (y % 4 == 0) {
//            if (y % 100 != 0){
//                printf("闰年:%d\n",y);
//                count++;
//            }
//        }
//        if(y%400==0){
//            printf("闰年:%d\n",y);
//            count++;
//        }
//    }
//        if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)){
//            printf("闰年%d\n",y);
//            count++;
//        }
//    }
//            printf("\ncount = %d\n", count);
//        return 0;
//    }

//打印100-200之间的素数
//素数 质数
//只能被1和它本身乘除

//int main() {
//    int i = 0;
//    for (int i = 100; i <= 200; i++) {
//        //判断i是否为素数
//        //2->i-1之间的数字去试除i，看能不能整除(能整除就不是素数)
//        int j = 0;
//        for (j = 2; j < i; j++) {
//            if (i % j == 0) {
//                break;
//            }
//        }
//        //以上说明不是素数
//        if (i == j) {
//            printf("素数：%d\n", i);//素数
//        }
//    }
//    return 0;
//}

//方法2：
//int main() {
//    int i = 0;
//    int count = 0;
//    for (int i = 100; i <= 200; i++) {
//        //判断i是否为素数
//        //2->i-1之间的数字去试除i，看能不能整除(能整除就不是素数)
//        int j = 0;
//        int flag = 1;//假设i就是素数
//        for (j = 2; j < i; j++) {
//            if (i % j == 0) {
//                flag = 0;//不是素数
//                break;
//            }
//        }
//        //以上说明不是素数
//        if (flag == 1) {
//            count++;
//            printf("素数：%d\n", i);//素数
//        }
//    }
//    printf("\ncount:%d\n",count);
//    return 0;
//}

//方法3：
int main(){
    int count = 0;
    int i = 0;

    //m = a*b
    //a和b中一定至少有一个数字是 <= 开平方m的
    // 16 = 2*8 = 4*4

    for (int i = 101; i <= 200; i+=2) {
        //判断i是否为素数
        //2->i-1之间的数字去试除i，看能不能整除(能整除就不是素数)
        int j = 0;
        int flag = 1;//假设i就是素数
        //sqrt - 是开平方的函数 - math.h
        for (j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                flag = 0;//不是素数
                break;
            }
        }
        //以上说明不是素数
        if (flag == 1) {
            count++;
            printf("素数：%d\n", i);//素数
        }
    }
    printf("\ncount:%d\n",count);
    return 0;
    return 0;
}

