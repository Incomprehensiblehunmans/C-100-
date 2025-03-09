#include <stdio.h>

//一个5位数，判断它是不是回文数。
//即12321是回文数，个位与万位相同，十位与千位相同。

int main(){

    int x;
    int digit[5];
    int count = 0;
    
    if(scanf("%d",&x) != 1){
        printf("输入错误，请输入一个5位数。\n");
        return 1;
    }
    else{
        if(x>0){
            while(x){
                digit[count++]=x%10;//取个位数
                x/=10;//去掉个位数
                if(count>5){
                    printf("输入的数字超过5位\n");
                    return 0;
                }
            }
        }
        else if(x<0){
            x=-x;
            while(x){
                digit[count++]=x%10;//取个位数
                x/=10;//去掉个位数
                if(count>5){
                    printf("输入的数字超过5位\n");
                    return 0;
            }    }   
        }
        else{
            printf("输入的数字不能为0\n");
            return 0;
        }    
    }

    if(digit[0]==digit[4] && digit[1]==digit[3]){
        printf("输入的数字是回文数\n");
    }
    else{
        printf("输入的数字不是回文数\n");
    }
}