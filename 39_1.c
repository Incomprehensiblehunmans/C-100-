#include <stdio.h>

// 有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

int main() {
    int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100}; // 初始化数组，长度为11
    int length = 10; // 当前数组中有效元素的个数

    printf("原来的数组为：");
    for (int i = 0; i < length; i++) {
        printf("%-4d", a[i]);
    }
    printf("\n");

    // 插入一个数
    int b, i, j;
    printf("请输入插入的一个数：");
    if (scanf("%d", &b) != 1) {
        printf("输入错误，请输入一个整数。\n");
        return 1;
    }

    if (b > a[length - 1]) {
        a[length] = b;
    } else {
        // b插到什么位置
        // 先移动后插入
        for (i = 0; i < length; i++) {
            if (a[i] < b) {
                continue; // 跳出本次循环，进行下一次循环
            } else {
                for (j = length - 1; j >= i; j--) {
                    a[j + 1] = a[j]; // 从后往前，把元素都后移一位，留出要插入的位置
                }
                a[i] = b; // 插入
                break;
            }
        }
    }

    length++; // 更新数组长度

    printf("之后的数组为：");
    for (int i = 0; i < length; i++) {
        printf("%-4d", a[i]);
    }
    printf("\n");

    return 0;
}