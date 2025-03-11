//输入一个整数，并将其反转后输出。

#include <stdio.h>

int main(){

    char a[10];
    printf("输入一个整数：\n");
    scanf("%s",a);
    int i=0;
    for (i=0;a[i]!='\0';i++);       //统计字符串长度
    for (int j=i-1;j>=0;j--){
        printf("%c",a[j]);
    }
    printf("\n");
    

}