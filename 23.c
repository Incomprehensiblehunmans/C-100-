#include <stdio.h>

//打印出如下图案（菱形）

int main(){

    int i,j,k;
    for (i = 0; i <= 4; i++){
        for (j = 0; j <= 4-i; j++){
            printf(" ");
        }
        for (k = 0; k <= 2*i; k++){
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i <= 3; i++){
        for (j = 0; j <= i+1; j++){
            printf(" ");
        }
        for (k = 0; k <= 6-2*i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}