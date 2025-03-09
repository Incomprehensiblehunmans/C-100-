#include <stdio.h>

//学习使用auto局部定义变量的用法

void main() {
	int i, num;
	num = 2;
	for (i = 0; i < 3; i++)
	{
		printf(" The num equal %d \n", num);
		num++;
		{
			auto   int  num = 1;
			printf(" The internal block num equal %d \n", num);
			num++;
		}
	}
}
