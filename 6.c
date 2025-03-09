//输入两个正整数m和n，求其最大公约数和最小公倍数。

# include <stdio.h>

int main(){
    printf("请输入两个正整数m和n：\n");
    int m,n;
    scanf("%d %d",&m,&n);
    //最大公约数
    int max = m>n?m:n;
    int min = m<n?m:n;
    int min_max=max;

    while(max%min!=0){
        int temp = max%min;
        max = min;
        min = temp;
    }
    printf("最大公约数为：%d",min);

    //最小公倍数
    printf("最小公倍数为：%d",m*n/min);


    while(min_max%m!=0&&min_max%n!=0){  //逻辑错误，因该用||
        
        min_max++;
    }
    printf("最小公倍数为：%d",min_max);
    return 0;   


}