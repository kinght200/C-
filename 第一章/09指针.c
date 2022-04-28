//
// Created by 17595 on 2022/4/14.
//

/*指针：就是地址
 *指针的大小是相同的
 *指针需要多大空间，取决于地址的存储需要多大空间
 *指针大小在32位平台是4个字节，64位平台是8个字节
 */

#include <stdio.h>

//int main() {
//    int a  = 10;//a在内存中要分配空间的 -- 4个字节
//    printf("%p\n",&a);//%p 专门用来打印地址
//    int * pa = &a;//pa是用来存放地址的，在C语言中pa是叫指针变量
//    // * 说明 pa是指针变量
//    // int 说明pa指向的对象是int类型的
//
//    char ch = 'w';
//    char * pc =&ch;
//    return 0;
//}

int main(){
    printf("%d\n", sizeof(char *));
    printf("%d\n", sizeof(short *));
    printf("%d\n", sizeof(int *));
    printf("%d\n", sizeof(long *));
    printf("%d\n", sizeof(long long *));
    printf("%d\n", sizeof(float *));
    printf("%d\n", sizeof(double *));
    return 0;
}
