//
// Created by 17595 on 2022/4/14.
//


#include <stdio.h>
#include <string.h>

//字符串就是一串字符 - 用双引号括起来的一串字符

//int main() {
//    "abcdef";
//    "hello world";
//
//    //字符数组 - 数组是一组相同类型的元素
////    char arr[] = "hello";
//    char arr1[] = "abc";
//    char arr2[] = {'a','b','c'};//后面没有\0，所以显示的随机值
//
//    //求一下字符串的长度
//    //
////    int len = strlen(arr1);//string length ,使用这个函数 需要引用头文件
////    printf("%d\n",len);
//    printf("%d\n", strlen(arr1));//3个字符
//    printf("%d\n", strlen(arr2));//6，随机值
//
//    //打印字符串
//    //字符串的结束标识是\0,而arr2没有\0，所以会出现两次abc
//    //printf("%s\n",arr1);//abc
//    //printf("%s\n",arr2);//abcabc
//    return 0;
//}

//转义字符 - 转变了它原来的意思！
int main()
{
//    printf("c:\test\test.c");//c:	est	est.c 没有显示\t，转义字符弄的
//    printf("ab\ncd");//ab 下一行 cd ; \n：换行
//    printf("%c\n",'\'');// '
//    printf("%s\n","\"");
    //printf在打印数据的时候，可以指定打印的格式

    //printf("%c\n",'\130');//8进制的130转换到10进制的88对应的 ASCII码值是 x
    //printf("%c\n",'\x30');//16进制的30转换到10进制的48对应的 ASCII码值是 0；字符0

    printf("%d\n", strlen("abc"));//3
    printf("%d\n", strlen("c:\test\328\test.c"));//14；对于8进制数字没有8，所以单独算一个字符

    return 0;
}



/*总结：
 * 1.字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的的时候 \0 是结束标志，不算做字符串内容。
 * 2.%d：打印整型； %c：打印字符； %s：打印字符串
 * 3.\t：水平制表符; \n：换行; \a：警告字符; \r：回车
 * 4.注释是用来解释复杂代码的
*/