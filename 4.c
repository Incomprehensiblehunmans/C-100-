# include <stdio.h>
                    
// 实现正整数分解因数
void func(int n) {
    printf("%d=", n);
    int first = 1; // 用于控制是否打印乘号

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            if (!first) {
                printf("*");
            }
            printf("%d", i);
            n = n / i;
            first = 0; // 之后需要打印乘号
        }
    }
    printf("\n");
}

int main() {
    func(90);
    return 0;
}