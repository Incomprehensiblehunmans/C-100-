//写一个函数，输入n为偶数时，调用函数求1/2+1/4+…+1/n,
//当输入n为奇数时，调用函数1/1+1/3+…+1/n
//(利用指针函数)

#include <stdio.h>

void sum(int n){
    double s=0;
    if (n%2==0){
        for (int i=2;i<=n;i+=2){
            s+=1.0/i;
        }
        printf("1/2+1/4+...+1/%d=|%020.10lf|\n",n,s);
    }
    else{
        for (int i=1;i<=n;i+=2){
            s+=1.0/i;
        }
        printf("1/1+1/3+...+1/%d=|%020.10lf|\n",n,s);
    }
}


int main(){

    int n;
    printf("输入一个整数：\n");
    scanf("%d",&n);
    sum(n);
    return 0;
}