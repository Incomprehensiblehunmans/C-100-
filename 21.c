# include <stdio.h>

//题目：猴子吃桃问题

int main(){

    int r = 1;
    for (int i = 9;i>0;i--){

        r = (r+1)*2;
    }
    printf("桃子总数：%d\n",r);
}   