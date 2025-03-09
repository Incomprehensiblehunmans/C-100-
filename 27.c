#include <stdio.h>

//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

void func(int n){

    char c;
    if(n==1){
        c=getchar();
        putchar(c);
    
    }
    else{
        c = getchar();
        func(n-1);
        putchar(c);
    }

}

int main(){

    printf("输入5个字符：");
    func(5);
    printf("\n");

    return 0;


}