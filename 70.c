//写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。

#include <stdio.h>

int func(char str[]){

    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
    

}


int main(){

    printf("请输入字符串：\n");
    char str[100];
    gets(str);

    int len=func(str);
    printf("输入字符长度为：%d\n",len);

    return 0;

}