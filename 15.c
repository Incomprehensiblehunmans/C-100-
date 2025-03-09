#include <stdio.h>

//输入三个整数x,y,z，请把这三个数由小到大输出。



int main(){

    int x,y,z;
    printf("请输入三个整数：");
    scanf("%d %d %d",&x,&y,&z);
    int temp;
    if(x>y){
        temp = x;
        x=y;
        y=temp;
    }

    if(x>z){
        temp = x;
        x=z;
        z=temp;
    }

    if(y>z){
        temp =y;
        y=z;
        z=temp;

    }

printf("%d %d %d\n",x,y,z);

}