//输入一个整数，并将其反转后输出。

#include  <stdio.h>

int main(){

    int n;
    printf("输入一个整数：\n");
    scanf("%d",&n);
    int m=0;

    while(n!=0){
        m=m*10+n%10;    //将n的最后一位加到m的末尾（实现反转）
        n=n/10;
    }

    printf("反转后的整数为：%d\n",m);
}