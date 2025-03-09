#include <stdio.h>

//求一个3*3矩阵对角线元素之和

int main(){

    int a[3][3];
    int sum = 0;
    printf("请输入一个3*3矩阵：\n");
    for (int i=0;i<3;i++){
        for (int j=0l;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for (int i=0;i<3;i++){
        sum += a[i][i];
    }
    printf("对角线元素之和为：%d\n",sum);
    return 0;

}