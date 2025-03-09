#include <stdio.h>

//对10个数进行排序

    //读取10个数字
void scan(int num[]){

    printf("请输入10个数：\n");
    for (int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
}
    //排序(冒泡排序)
void sort(int num[]){

    for (int i=0;i<10-1;i++){
        for (int j=0;j<10-i-1;j++){
            if  (num[j]>num[j+1]){

                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;

            }
        }
    }
}

int main(){

    int num[10];
    scan(num);
    sort(num);
    printf("排序后的结果为：\n");
    for (int i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    printf("\n"); 
}