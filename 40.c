#include <stdio.h>

//将一个数组逆序输出。

int main(){

    int a[5];
    printf("请输入5个数：\n");
    for (int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }


    for (int i=0;i<2;i++){
        a[i] = a[4-i]+a[i];
        a[4-i] = a[i]-a[4-i];
        a[i] = a[i]-a[4-i];
    }
    printf("逆序输出：\n");
    for (int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

}