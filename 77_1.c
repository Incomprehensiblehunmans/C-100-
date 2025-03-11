//指向指针的指针
//二级指针
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 100;
	int* p1 = &a; //一级指针，指向a的地址
	int** p2 = &p1; //二级指针，指针p1的地址

	printf("&a = %x\n", &a);
	printf("*p2 = %x\n", *p2);

	printf("a = %d\n", a);
	printf("**p2 = %d\n",**p2);
	return 0;
}
