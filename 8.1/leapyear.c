#include <stdio.h>


void isLeapYear(int num)
{
    if((num/400) ==0 || (num/4) ==0 ){
        printf("%d年は、うるう年です。",num);
    }else{
        printf("%d年は、うるう年ではありません。",num);
    }
}

int main(void)
{
    isLeapYear(1220);
    return 0;
}