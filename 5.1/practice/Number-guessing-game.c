#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
    String myAns;
    int num;
    for(int i =0;i<4;i++){
    printf("数当てゲーム（レベル1）\n回答のチャンスは4回までです。\n1桁の数を入力してください");
    scanf("%s",myAns);
    int n =atoi(myAns);
    srand((unsigned)time(NULL));
    int answer= rand() %10;
    if(n == answer){
        printf("%d,%d回目",answer,i);
    }else{
        if(n>answer){
            printf("ヒント%d",n);
        }else{
            printf("ヒント%d",answer);
        }
    }
}
}