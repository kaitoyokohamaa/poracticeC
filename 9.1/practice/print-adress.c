#include<stdio.h>


void printIntBydress(int *x)
{
    printf("%d",*x);
}
int main(void)
{
    int a = 70;
    printIntBydress(&a);
    return 0;
}