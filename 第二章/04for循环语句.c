//
// Created by 17595 on 2022/4/15.
//

//for(表达式1，表达式2，表达式3)
//     初始化，  判断    调整
//建议：
//1。不可在for循环体内修改循环变量，防止for循环失控
//2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法

#include <stdio.h>

//int main() {
////    int i = 0;
//    for (int i = 1; i <= 10; i++) {
////        if(i ==5){
////            break;
////        }//1234
//        if (i == 5) {
//            continue;
//        }//1234678910
//        printf("%d", i);
//    }
//    return 0;
//}

//for变种
//省略会出现无尽循环
//int main(){
//    for(;;){
//        printf("hehe\n");
//    }
//    return 0;
//}

//会打印3次hehe
int main(){
    int i = 0;
    int j = 0;
    for (; i < 3; i++) {
        for (; j <3; j++) {
            printf("hehe\n");
        }

    }
}