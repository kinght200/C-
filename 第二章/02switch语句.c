//
// Created by 17595 on 2022/4/15.
//

//switch语句
//没有break语句就会继续执行到下一步
#include <stdio.h>

int main() {
    int day = 0;
    scanf("%d", &day);
//    switch (day) {
//        case 1:
//            printf("星期1\n");
//            break;
//        case 2:
//            printf("星期2\n");
//            break;
//        case 3:
//            printf("星期3\n");
//            break;
//        case 4:
//            printf("星期4\n");
//            break;
//        case 5:
//            printf("星期5\n");
//            break;
//        case 6:
//            printf("星期6\n");
//            break;
//        case 7:
//            printf("星期7\n");
//            break;
//    }

    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 7:
            printf("休息日\n");
            break;
        default:
            printf("输入错误\n");
            break;

    }
    return 0;
}
