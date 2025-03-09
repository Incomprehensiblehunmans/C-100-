#include <stdio.h>

//学习static定义静态变量的用法


void varfunc()
{
	static int num = 5; // static修饰
	num--;
	printf("当前num=%d\n", num);
}
void main()
{
	int i;
	for (i = 0; i < 3; i++) {
		varfunc();
	}
}
