#include <stdio.h>

//有5个人坐在一起
//问第五个人多少岁？他说比第4个人大2岁。
//问第4个人岁数，他说比第3个人大2岁。
//问第三个人，又说比第2人大两岁。
//问第2个人，说比第一个人大两岁。
//最后问第一个人，他说是10岁。请问第五个人多大？

 //递归法
 int func(int n){

    int age = 0;
    if(n==1){
        age = 10;
    }
    else{
        age = func(n-1)+2;
    }
    
    return age;

 }




int main(){                    
 
    printf("第五个人年龄：%d\n",func(5));
    return 0;
}