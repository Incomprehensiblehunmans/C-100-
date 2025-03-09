# include <stdio.h>

//水仙花数

int func(int s,int e){
    
    for (s;s<e;s++){

        int a = s%10;
        int b = (s/10)%10;
        int c = s/100;
        
        if(a*a*a + b*b*b + c*c*c == s){
            printf("%d\n",s);
        }
    }
}

int main(){

    func(100,1000);

    return 0;
}