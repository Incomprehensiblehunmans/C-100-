#include <stdio.h>

//通过数组和循环实现
//scanf()返回值为成功获取的输入项个数

int main() {
    int x;
    printf("请输入不多于5位数的正整数：");
    if (scanf("%d", &x) != 1 || x <= 0 || x > 99999) {
        printf("输入错误，请输入一个不多于5位的正整数。\n");
        return 1;
    }

    int digits[5];
    int count = 0;

    // 提取每一位数字
    while (x > 0) {
        digits[count++] = x % 10;
        x /= 10;
    }

    printf("输入的正整数是%d位数\n", count);
    printf("逆序为：");
    for (int i = 0; i < count; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}