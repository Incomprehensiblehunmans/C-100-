//题目：一个整数，它加上100后是一个完全平方数，
//再加上168又是一个完全平方数，请问该数是多少？

#include <stdio.h>
#include <math.h>

int main(){
    for (int i =0;i<1000000;i++){
        if((sqrt(i+100))==((int)sqrt(i+100))&&(sqrt(i+268))==((int)sqrt(i+268))){
            printf("%d\n",i);
        }
    }
}