# include <stdio.h>

//利用递归方法求5!。

int func(int n){

    if(n == 1){
        return 1;
    }
    else{
        return n*func(n-1);
    }
}


int main(){
    int n;
    printf("输入数字求阶乘：");
    scanf("%d",&n);
    printf("%d\n",func(n));

    return 0;
}