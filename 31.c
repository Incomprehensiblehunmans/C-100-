#include <stdio.h>

//请输入星期几的第一个字母来判断一下是星期几，
//如果第一个字母一样，则继续判断第二个字母。
// monday tuesday wednesday thursday friday saturday sunday

int main(){

    char c;
    char s;
    printf("请输入星期几的第一个字母：");
    c = getchar();
    getchar(); 
    
    switch(c){

        case 'm':
            printf("monday\n");
            break;
        case 't':
            printf("请输入星期几的第二个字母：");
            s = getchar();
            if(s == 'u'){
                printf("tuesday\n");
            }
            else if(s == 'h'){
                printf("thursday\n");
            }
            else{
                printf("输入错误，请重新输入。\n");
            }
            break;
        case 'w':
            printf("wednesday\n");
            break;
        case 'f':
            printf("friday\n");
            break;
        case 's':
            printf("请输入星期几的第二个字母：");
            s = getchar();
            if(s == 'a'){
                printf("saturday\n");
            }
            else if(s == 'u'){
                printf("sunday\n");
            }
            else{
                printf("输入错误，请重新输入。\n");
            }
            break;
        default:
            printf("输入错误，请重新输入。\n");
            break;
       
    }
}