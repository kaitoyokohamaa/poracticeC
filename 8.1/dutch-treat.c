#include <stdio.h>
#include <stdlib.h>


typedef char String[1024];

void showPayment(pay , people , payorg)
{
    printf("*** 支払額 ***\n");
    printf("一人あたり%d円(%d人)、幹事は%d円です。\n",pay,people-1,payorg);
}


int calcPayment(amount,people)
{
    int pay;
    int payorg;
    double dum;
    dum = (double)amount / people;
    pay = (int)(dum/100) * 100;
    if(dum > pay){
        pay = pay +100;
    }
   payorg = amount - pay * (people - 1);
   showPayment(pay,people,payorg);
   return 0;

}

int iscanf()
{
    int amount;
    int people;
    String inputStr;
    printf("支出総額を入力してください:");
    scanf("%s",inputStr);
    amount = atoi(inputStr);
    printf("参加人数を入力してください:");
    scanf("%s",inputStr);
    people = atoi(inputStr);
    calcPayment(amount,people);
    return 0;
}

int main(void)
{

    iscanf();
    return 0;
}

