//
// Created by 17595 on 2022/4/22.
//

//链式访问：把一个函数的返回值作为另外一个函数的参数

#include <stdio.h>
#include <string.h>

//写一个函数，每调用一次这个函数，就会将num的值增加1
//void Add(int *p){
//    (*p)++;
//}
//
//int main() {
//    int num = 0;
//    Add(&num);
//    printf("%d\n",num);//1
//
//    Add(&num);
//    printf("%d\n",num);//2
//
//    Add(&num);
//    printf("%d\n",num);//3
//    return 0;
//}

//函数的嵌套调用和链式访问
//void test3(){
//    printf("hehe\h");
//}
//
//int test2(){
//    test3();
//    return 0;
//}
//
//int main(){
//    test2();
//    return 0;
//}

//int main(){
////    int len = strlen("abc");
////    printf("%d\n",len);
////
////    //链式访问
////    printf("%d\n", strlen("abc"));
//
////    char arr1[20] ={0};
////    char arr2[] = "bit";
////    strcpy(arr1,arr2);
////
////    printf("%s\n",arr1);
////    //链式访问
////    printf("%s\n",strcpy(arr1,arr2));
//
//    //printf: 函数返回的是打印在屏幕上的字符的个数
//    printf("%d", printf("%d", printf("%d",43)));
//    return 0;
//}


int main(){
    int a = 10;
    int b = 20;
    //函数在后面需要声明一下 - 告知编译器有这个函数
    int Add(int,int);
    int c = Add(a,b);
    printf("%d\n",c);
    return 0;
}

//函数的定义
int Add(int x ,int y){
    return x+y;
}
