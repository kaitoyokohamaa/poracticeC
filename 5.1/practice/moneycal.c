#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int allNum=3000;
    int num=0;
    do{
        if(allNum < 120){
            printf("リンゴ%dあまりは%d円 \n",num,allNum);
        }else if(allNum == 120){
            allNum = allNum - 120;
            num=num+1;
            printf("リンゴ%dあまりは%d円 \n",num,allNum);
        }
        else{
            allNum = allNum - 120;
            num=num+1;
        }
    }
    while(allNum>=120);

    int micanAllNum=3000;
    int micanNum=0;
    do{
       if(micanAllNum > 400){
            micanAllNum = micanAllNum - 400;
            micanNum = micanNum + 1;
            if(micanAllNum < 400){
            printf("みかん%dあまりは%d円 \n",micanNum,micanAllNum);
        }
        }
    }
    while(micanAllNum > 400);
}