#include <stdio.h>

// 求1! + 3! + 5! + ... + 19!的和

long long func() {
    long long sum = 0;
    long long factorials[10]; // 用于存储奇数阶乘的数组
    int index = 0;

    for (int i = 1; i <= 19; i += 2) { // 只遍历奇数
        long long temp = 1; // 重置temp为1
        for (int j = 1; j <= i; j++) {
            temp *= j; // 计算阶乘
        }
        factorials[index++] = temp; // 将阶乘结果存储到数组中
        sum += temp; // 累加到总和
    }

    // 输出每个奇数的阶乘
    for (int i = 0; i < index; i++) {
        printf("%d! = %lld\n", 2 * i + 1, factorials[i]);
    }

    printf("sum = %lld\n", sum);
    return sum;
}

int main() {
    func();
    return 0;
}