//指针+字符串

#include <stdio.h>
int main(void)
{
	const char* s1 = "1111111";
	const char* s2 = "asdf";
	const char* s3 = "zxcv";
	// 存储的是三个字符串的首地址，就是字符串名
	const char* s[3] = { s1,s2,s3 };
	printf("%s\n%s\n%s\n", s[0], s[1], s[2]);   //%s需要给一个指针
    printf("%p\n%p\n%p\n", s[0], s[1], s[2]);

	return 0;
}