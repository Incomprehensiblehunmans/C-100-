#include <stdio.h>


// 求1! + 3! + 5! + ... + 19!的和

int func() {
    long long sum = 0;
    long long temp = 1;

    for (int i = 1; i <= 19; i += 2) { // 只遍历奇数
        temp = 1; // 重置temp为1
        for (int j = 1; j <= i; j++) {
            temp *= j; // 计算阶乘
        }
        sum += temp; // 累加到总和
    }

    printf("sum = %lld\n", sum);
    return sum;
}

int main() {
    func();
    return 0;
}