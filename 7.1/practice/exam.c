
// myans
// #include <stdio.h>

// int main(void)
// {
//     int score[5];
//     int max;
//     int min;
//     int sum;
//     score[0]=88;
//     score[1]=61;
//     score[2]=90;
//     score[3]=75;
//     score[4]=93;
//     for(int i=0;i<5;i++){
//         if(score[i]>max){
//             max=score[i];
//         }else if(min<score[i]){
//             min=score[i];
//         }
//         sum=sum+score[i];
//     }
//     printf("最高%d\n",max);
//     printf("最小%d\n",min);
//     printf("平均%.2d\n",sum/5);
// }

#include <stdio.h>

int main(void)
{
    enum {LEN = 5};
    int scores[LEN] = {88,61,90,75,93};
    int sum = 0;
    int max = scores[0];
    int min = scores[0];

    for(int i = 0; i<LEN;i++){
        sum =sum+scores[i];

        if(max < scores[i]){
            max = scores[i];
        }
        if(min > scores[i]){
            min = scores[i];
        }
    }
    printf("最高点: %d\n",max);
    printf("最低点: %d\n",min);
    printf("平均点: %.2f\n",(double)sum/LEN);
    return 0;
}