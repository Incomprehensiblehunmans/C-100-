# include <stdio.h>

//求1+2!+3!+…+20!的和(用temp存储中间结果)

//如果求1！+3！+5！+…+19!的和，
//只需要将for循环中的temp*=i改为temp*=2*i-1即可  <==错误！！！
            //3！因该是3*2*1。

int func(){
    long long sum = 0;
    long long temp = 1;
    for (int i = 1;i<=20;i++){
       temp*=i;
       // temp*=2*i-1;  //错误！！！
        sum+=temp;

    }
    printf("sum = %lld\n",sum);
}



int main(){

    func();
    return 0;

}