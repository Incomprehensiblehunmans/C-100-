# include <stdio.h>

//一个数如果恰好等于它的因子之和，这个数就称为“完数”。
//例如6=1＋2＋3。编程找出1000以内的所有完数。

int main(){

    for (int i = 1;i<=1000;i++){

        int sum = 0;
        for (int j=1;j<i;j++){  
            if (i%j==0)            //如果是因子,则相加
                sum+=j;
            
        }
        if (i==sum){
            printf("%d\n",i);

        }
    }

    return 0;
}