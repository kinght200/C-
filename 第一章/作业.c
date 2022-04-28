//
// Created by 17595 on 2022/4/15.
//


#include <stdio.h>

//题目：写一个函数求两个整数的较大值
//int Max(int x,int y){
//    if(x>y){
//        return x;
//    } else{
//        return y;
//    }
//}
//
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    int m = Max(a,b);
//    printf("最大值为 = %d\n",m);
//
//    return 0;
//}

//输出一个小飞机
//int main(){
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//    return 0;
//}

//判断一个整数m是否能被5整除;m(1<=m<=100,000)
int main(){
    //输入
    int m = 0;
    scanf("%d",&m);

    //判断
    if(m%5==0){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}
