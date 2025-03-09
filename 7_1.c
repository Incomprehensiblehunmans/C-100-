# include <stdio.h>

//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

int func(){
    printf("请输入一行字符：\n");
    char c ;
    int english=0,space=0,num=0,others=0;
    while((c=getchar())!='\n'){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            english++;
        }
        else if (c==' '){
            space++;
        }
        else if(c>='0'&&c<='9'){
            num++;
        }
        else others++;

    }

    printf("英文字母：%d\n空格：%d\n数字：%d\n其他字符：%d\n",english,space,num,others);
    return 0;
}

int main(){
    func();
    return 0;
}