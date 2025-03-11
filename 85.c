//判断一个素数能被几个9整除。
//分析：意思是判断一个素数能整除几个9组成的数，
//素数是不能被除1和自身之外的数整除的。

#include <stdio.h>

int main(){

    int n;
    int i=0;
    int m=0;
    printf("输入一个素数\n: ");
    scanf("%d",&n);

    while(i<100){
        i++;
        m=m*10+9;
        if (m%n==0){
            printf("%d能被%d个9整除\n",n,i);
            break;
        }
    }
    return 0;

}

