//
// Created by 17595 on 2022/4/14.
//


#include <stdio.h>
//函数
//int Add(int x,int y){
//    int z = 0;
//    z = x + y;
//    return z;
//}
//
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    scanf("%d%d",&num1,&num2);
////    int sum = num1 + num2;
////    函数的方式
//    int sum = Add(num1,num2);
//    printf("%d\n",sum);
//    return 0;
//}

//数组 - 一组相同类型的元素的集合
//10个整型1-10存起来
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    while (i < 10){
        printf("%d\n",arr[i]);
        i++;
    }
    //char ch[5] = {'a','b','c'};//不完全初始化，剩余的自动填充为0
    return 0;
}