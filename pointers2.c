#include <stdio.h>

int main(void)
{
    int x = 10;
    int *ptr;

    ptr = &x;

    printf("قبل: x = %d\n", x);

    *ptr = 50;

    printf("بعد: x = %d\n", x);

    return (0);
}
