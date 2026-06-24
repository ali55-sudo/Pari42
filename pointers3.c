
#include <stdio.h>

void increment(int *n)
{
    (*n)++;
}

int main(void)
{
    int num = 5;

    printf("قبل: %d\n", num);
    increment(&num);
    printf("بعد: %d\n", num);

    return (0);
}
