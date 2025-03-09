//题目：打印出杨辉三角形（要求打印出n行如下图）
//杨辉三角科普：
//杨辉三角，是二项式系数在三角形中的一种几何排列。每个数等于它上方两数之和。
//https://i-blog.csdnimg.cn/blog_migrate/c91b60241c1fa6ced6d7899576ce3529.jpeg#pic_center


#include <stdio.h>

// 构建杨辉三角
void func_create_3(int n, int arr[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
}

// 输出杨辉三角
void func_print_3(int n, int arr[n][n]) {
    int i, j;
    int width = 10; // 每个数字的宽度
    for (i = 0; i < n; i++) {
        // 打印前导空格，使每行居中对齐
        for (j = 0; j < (n - i - 1) * width / 2; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%*d ", width, arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("请输入行数：");
    scanf("%d", &n);
    int arr[n][n];

    func_create_3(n, arr);
    func_print_3(n, arr);

    return 0;
}

