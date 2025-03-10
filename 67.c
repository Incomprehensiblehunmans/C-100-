//输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
//分析：利用指针输出数组

#include <stdio.h>
#include "swap.h"


//输入数组
int input_arr(int *p){

    int i;
    printf("请输入10个整数：\n");

    for (i=0;i<10;i++){
        scanf("%d",p+i);
    }
}

//交换
int exchange_arr(int *p){

        
    int i,max,min;
    int m_count=0,n_count=0;
    max=min=*p;

    for (i=0;i<10;i++){
        if (*(p+i)>max){
            max=*(p+i);
            m_count = i;
        }
        if (*(p+i)<min){
            min=*(p+i);
            n_count = i;
        }
    }

    swap(p,p+m_count);
    swap(p+9,p+n_count);

}

//输出数组
int output_arr(int *p){

    int i;
    printf("数组内容为：\n");

    for (i=0;i<10;i++){
        printf("%d ",*(p+i));
    }
}


int main(){

    int arr[10];
    int *p=arr;
    input_arr(p);
    exchange_arr(p);
    output_arr(p);

    return 0;
}