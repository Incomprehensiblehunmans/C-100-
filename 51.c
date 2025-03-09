//学习使用按位与 & 。

#include <stdio.h>

int main(void)
{
    int a = 0b1010;
    int b = 0b0101;
    int c;

    c = a & b;
    printf("a = %x\n", a);
     printf("a  = %x\n", b);
    printf("a & b = %x\n", c);

    return 0;
}
