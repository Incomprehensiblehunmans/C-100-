#include <stdio.h>


//素数

int func(int s,int e){

    for (s;s<=e;s++){
        int is_sushu = 1;

        for (int i= 2;i<s;i++){
            if (i<e  && s%i ==0 ){
                is_sushu = 0;
                break;
            }
        }
      
        if(is_sushu) printf("%d ",s);
    }


}

int main() {

    func(100,200);
    return 0;
}