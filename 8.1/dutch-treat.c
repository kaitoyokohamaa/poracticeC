// #include <stdio.h>
// #include <stdlib.h>


// typedef char String[1024];

// void showPayment(pay , people , payorg)
// {
//     printf("*** 支払額 ***\n");
//     printf("一人あたり%d円(%d人)、幹事は%d円です。\n",pay,people-1,payorg);
// }


// int calcPayment(amount,people)
// {
//     int pay;
//     int payorg;
//     double dum;
//     dum = (double)amount / people;
//     pay = (int)(dum/100) * 100;
//     if(dum > pay){
//         pay = pay +100;
//     }
//    payorg = amount - pay * (people - 1);
//    showPayment(pay,people,payorg);
//    return 0;

// }

// int iscanf()
// {
//     int amount;
//     int people;
//     String inputStr;
//     printf("支出総額を入力してください:");
//     scanf("%s",inputStr);
//     amount = atoi(inputStr);
//     printf("参加人数を入力してください:");
//     scanf("%s",inputStr);
//     people = atoi(inputStr);
//     calcPayment(amount,people);
//     return 0;
// }

// int main(void)
// {

//     iscanf();
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int iscanf(void)
{
    String inputStr;
    scanf("%s",inputStr);
    return atoi(inputStr);
}

int calcPayment(int dividend,int divisor)
{
    double dnum = (double)dividend / divisor;

    int person = (int)(dnum / 100) *100;

    if(dnum > person){
        person = person + 100;
    }
    return person;
}

void showPayment(int general, int manager, int numbers)
{
    printf("***支払額***\n");
    printf("一人当たり%d円(%d人)、幹事は%d円です。\n",general,numbers - 1,manager);
}

int main(void)
{
    printf("支払総額を入力してください:");
    int amount = iscanf();
    printf("参加人数を入力してください:");
    int people = iscanf();

    int pay = calcPayment(amount,people);

    int payorg = amount - pay * (people - 1);
    showPayment(pay, payorg, people);
    return 0;
}