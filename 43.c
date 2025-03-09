#include <stdio.h>
//#include "43_test.c"  //这应该叫做文件包含

//学习使用extern的用法。

extern int number; //声明外部变量

int main(){

    printf("num=%d\n", number); //使用外部变量
    return 0;
}
