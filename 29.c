#include <stdio.h>

//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。


int func1(char d[]){     //求输入的几位数

    char c;
    int count = 0;

    while((c=getchar())!='\n'){

        count++;
        d[count-1] = c;
        if(count>5){
            printf("输入的数字超过5位\n");
            return 0;
        }
    }
    printf("输入的数字是%d位数\n",count);
    return count;

}

int func2(int n,char d[]){
       if(n==1){
            putchar(d[0]);
       }
       else{
            func2(n-1, d);
            putchar(d[n-1]);
       }

}

int main(){

    char d[5];

    printf("请输入一个不多于5位的正整数：");
    int n =func1(d);
    printf("逆序打印：");
    func2(n,d);

    return 0;
}