//66.输入3个数a,b,c，按大小顺序输出。
//利用指针方法。

#include <stdio.h>
#include "swap.h"


// //交换函数
// void swap(int *x,int *y){  

//     int temp = *x;
//     *x = *y;
//     *y = temp;

// }

int main(){

    int a,b,c;
    int *pa,*pb,*pc;
    pa = &a;
    pb = &b;
    pc = &c;
    printf("enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>b){
        swap(pa,pb);
    }
    if (a>c){
        swap(pa,pc);
    }
    if (b>c){
        swap(pb,pc);
    }

    printf("from small to large: %d < %d < %d\n", a, b, c);


}