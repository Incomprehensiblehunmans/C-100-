#include <stdio.h>
#include <math.h>

//求100之内的素数

int is_prime(int n){

    if(n<=1)return 0;
    int is_prime = 1;
    for (int i = 2;i<=sqrt(n);i++){
         if(n%i == 0){
            is_prime =0;
        }
    }
    return is_prime;

}


int main(){

    for (int i = 1;i<=100;i++){
        if(is_prime(i)){
            printf("%d\n",i);
        }
    }

    return 0;
    
}