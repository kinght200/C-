//
// Created by 17595 on 2022/4/15.
//

//while语句

#include <stdio.h>

//int main() {
//    while (2){
//        printf("nihao\n");
//    }
//    return 0;
//}

//int main() {
//    int i = 1;
//    //在while循环中，break用于永久的终止循环
//    //在while循环中，continue的作用是跳过本次循环continue后边的代码，
//    //直接去判断部分，看是否进行下一次循环
////    while (i <= 10) {
////        if(i == 5)
////            break;
////        printf("%d\n", i);
////        i++;
////    }
//
//    while (i <= 10) {
//        if(i == 5)
//            continue;
//        printf("%d\n", i);
//        i++;
//    }
//    return 0;
//}

int main(){
    char password[20] = {0};
    printf("请输入密码:>");
    scanf("%s",password);//假设输入的是123456
    printf("请确认密码（Y/N）:>");
    //在缓冲区里面会出现123456\n;passsword把123456拿走了，还剩一个\n;所以getchar看见缓冲区里面有东西就把\n拿走了
    //现在要做的是清理缓冲区
//    getchar();//处理'\n'

    //清理缓冲区中的多个字符
    int tmp =0;
    while ((tmp = getchar()) != '\n'){ //getchar一直读，读到'\n'的时候tmp='\n';tmp!='\n'为假就跳出
        ;
    }
    int ch = getchar();
    if(ch == 'Y'){
        printf("确认成功\n");
    } else{
        printf("确认失败\n");
    }
    return 0;
}

