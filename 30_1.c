#include <stdio.h>

// 一个5位数，判断它是不是回文数。
// 即12321是回文数，个位与万位相同，十位与千位相同。

int main() {
    int x;
    int digit[5];
    int count = 0;

    printf("请输入一个5位数：");
    if (scanf("%d", &x) != 1 || (x > -10000 && x < 10000) || x < -99999 || x > 99999) {
        printf("输入错误，请输入一个5位数。\n");
        return 1;
    }

    // 处理负数
    if (x < 0) {
        x = -x;
    }

    // 提取每一位数字
    while (x) {
        digit[count++] = x % 10; // 取个位数
        x /= 10; // 去掉个位数
    }

    // 判断是否为回文数
    if (digit[0] == digit[4] && digit[1] == digit[3]) {
        printf("输入的数字是回文数\n");
    } else {
        printf("输入的数字不是回文数\n");
    }

    return 0;
}