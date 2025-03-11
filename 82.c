//题目：八进制转换为十进制。

#include <stdio.h>

int main(){

    char a[20];     //注意是char
    int  n=0;
    printf("输入八进制: ");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        n=n*8+a[i]-'0';
    }

    printf("十进制为: %d\n",n);

    return 0;
}