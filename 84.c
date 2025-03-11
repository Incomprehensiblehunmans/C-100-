//一个偶数总能表示为两个素数之和。

#include <stdio.h>
#include <math.h>


int isPrime(int n){
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(void){

    int n;
    printf("输入一个偶数: ");
    scanf("%d",&n);
    int found=0;
    for (int i=2;i<=n/2;i++){
        
        if (isPrime(i)&&isPrime(n-i)){
            printf("%d=%d+%d\n",n,i,n-i);
            found = 1;
            break;
        }
    }
    if(!found){
            printf("无法表示为两个素数之和\n");
    }
    
    return 0;

}