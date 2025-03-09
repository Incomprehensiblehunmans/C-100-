#include <stdio.h>

//题目：有一分数序列：
//  2/1，3/2，5/3，8/5，13/8，21/13…求出这个数列的前20项之和。

int main(){

    float sum = 0;
    float m = 2, n = 1;
    for (int i = 1;i<=20;i++){

        sum  += m/n;
        float temp = m;
        m = m+n;
        n = temp;

    }
    printf("sum = %f\n",sum);

}