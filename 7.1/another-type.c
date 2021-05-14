#include <stdio.h>

int main(void)
{
    typedef int Intx10[10];
    Intx10 gems;

    gems[1]=3;
    printf("%d\n",gems[1]);
    return 0;
}