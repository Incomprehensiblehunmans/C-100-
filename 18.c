#include <stdio.h>

//输出9*9口诀。

int main(){

    for (int i =1;i<=9;i++){
        for (int j=1;j<=i;j++){
            printf("%d*%d=%d\t",j,i,i*j);
                
        }
        printf("\n");
    }
        
}