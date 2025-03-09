# include <stdio.h>

// 使用动态规划求斐波那契数列
unsigned long long func(int n) {
    if (n == 1 || n == 2)
        return 1;

    unsigned long long fib[n+1];
    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];
}

int main() {
    for (int i = 1; i < 100; i++) {
        printf("第%d位%lld\n", i, func(i));
    }
    return 0;
}