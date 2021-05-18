// #include <stdio.h>

// myans
// void isLeapYear(int num)
// {
//     if((num/400) ==0 || (num/4) ==0 ){
//         printf("%d年は、うるう年です。",num);
//     }else{
//         printf("%d年は、うるう年ではありません。",num);
//     }
// }

// int main(void)
// {
//     isLeapYear(1220);
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year)
{
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int main(void)
{
    int year = 2100;

    if(isLeapYear(year)){
        printf("%d年は、うるう年です。\n", year);
    }else{
        printf("%d年は、うるう年ではありません。\n", year);
    }
    return 0;
}