// 有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数。

#include <stdio.h>

int main() {
    int n, m;

    printf("请输入n的值：\n");
    scanf("%d", &n);

    int arr[n];
    printf("请输入n个整数：\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("请输入m的值：\n");
    scanf("%d", &m);

    int b[m]; // 暂存m个数

    // 暂存最后m个数
    for (int i = 0; i < m; i++) {
        b[i] = arr[n - m + i];
    }

    // 将前面各数顺序向后移m个位置
    for (int i = n - m - 1; i >= 0; i--) {
        arr[i + m] = arr[i];
    }

    // 将暂存的m个数移到最前面
    for (int i = 0; i < m; i++) {
        arr[i] = b[i];
    }

    printf("输出结果为：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}