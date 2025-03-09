# include <stdio.h>

// 求s=a+aa+aaa+aaaa+aa…a的值，其中a是一个数字。

int main(){
    int a,n;
    printf("请输入a和n：\n");
    scanf("%d %d",&a,&n);
    int sum = 0;
    int temp = a;
    
    for (int i=0;i<n;i++){
        sum +=temp;
        temp = temp*10+a;   //a = a*10 +2 错误,2 因该是a
    }

    printf("%d",sum);
    return 0;
}