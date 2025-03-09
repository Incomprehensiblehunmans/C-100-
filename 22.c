#include <stdio.h>

/*题目：两个乒乓球队进行比赛，各出三人。
甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。
有人向队员打听比赛的名单。
a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
分析：循环依次比较，两两比较，if 判断参赛队员是否重复及对战条件。*/

int main(){
    char i,j,k;
    for (i = 'x'; i <= 'z'; i++){
        for (j = 'x'; j <= 'z'; j++){
            if (i != j){
                for (k = 'x'; k <= 'z'; k++){
                    if (i != k && j != k){
                        if (i != 'x' && k != 'x' && k != 'z'){
                            printf("a--%c\nb--%c\nc--%c\n",i,j,k);
                        }
                    }
                }
            }
        }
    }
    return 0;
}