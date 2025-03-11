//题目：读取7个数（1—50）的整数值，
//每读取一个值，程序打印出该值个数的＊

#include <stdio.h>

int main(){

    for (int i=0;i<7;i++){
        int n;
        printf("请输入第%d个数(1-50)\n: ",i+1);
        scanf("%d",&n);
        if (n<1||n>50){
            printf("输入错误\n");
            i--;
            continue;
        }
        for (int j=0;j<n;j++){
            printf("*");
        }
    }
}