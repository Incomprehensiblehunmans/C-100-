//指针的数组：数组中所有的元素，保存的都是指针

#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* array[3] = { &a,&b,&c };
	int** p = array;
	printf("%d,%d,%d\n", *array[0], *array[1], *array[2]);
	printf("%d,%d,%d", **(p+0), **(p + 1), **(p + 2));

	return 0;
}
