#include <stdio.h>

int main(void)
{
    int a=70;
    printf("変数aには70が入ってます\n");

    long addrA = (long)&a;
    printf("変数aのアドレス:%1d\n",addrA);
    return 0;
}