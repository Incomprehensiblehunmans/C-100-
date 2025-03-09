#include <stdio.h>

// 递归函数计算阶乘
long long factorial(int n, long long *factorials) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (factorials[n] != 0) {
        return factorials[n]; // 如果已经计算过，直接返回结果
    } else {
        factorials[n] = n * factorial(n - 1, factorials); // 计算并保存结果
        return factorials[n];
    }
}

// 求1! + 3! + 5! + ... + 19!的和，并使用数组保存中间结果
long long func() {
    long long sum = 0;
    long long factorials[20] = {0}; // 用于存储1到19的奇数阶乘，初始化为0

    for (int i = 1; i <= 19; i += 2) { // 只遍历奇数
        factorials[i] = factorial(i, factorials); // 计算阶乘并存储到数组中
        sum += factorials[i]; // 累加到总和
    }

    // 输出每个奇数的阶乘
    for (int i = 1; i <= 19; i += 2) {
        printf("%d! = %lld\n", i, factorials[i]);
    }

    printf("sum = %lld\n", sum);
    return sum;
}

int main() {
    func();
    return 0;
}