# include <stdio.h>

int func(int n){

    printf("%d=",n);
    int is_first = 1;
    for (int i =2 ;i<=n;i++){

                        //缺少再次检查i是否任然为n/i的因式子
        if(n%i==0){

            if(!is_first)printf("*");
            printf("%d",i);
            n=n/i;
            is_first=0;
        }

    }
}

int main(){

    func(90);
    return 0;

}