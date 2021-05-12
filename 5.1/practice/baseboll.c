#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
    String num;
    printf("1〜9の数を入力してください");
    scanf("%s",num);
    int n = atoi(num);
    switch(n){
        case 1:
        case 2:
            printf("バッテリー");
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            printf("内野手");
            break;
        case 7:
        case 8:
        case 9:
            printf("外野手");
            break;
        default:
            printf("入力された守備位置はありません。");
    }
}