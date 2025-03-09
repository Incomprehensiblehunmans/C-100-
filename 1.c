# include <stdio.h>
//求斐波拉契数，f1=1,f2=1,f3=f1+f2,fn=fn-1+fn-2
//1 1 2 3 5 8 13 21 34 55   


int func(int n){
    if (n == 1 || n ==2)
        return 1;
    else {
        return func(n-1) +func(n-2);

    }
}

int main(){
    for (int i=1;i<50;i++){
        printf("第%d位%d\n",i,func(i));
    }
    return 0;
  

}