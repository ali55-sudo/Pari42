#include <stdio.h>

int main(void)
{
    int x = 42;
    int *ptr;

    ptr = &x;

    printf("القيمة: %d\n", x);
    printf("العنوان: %p\n", &x);
    printf("قيمة المؤشر: %p\n", ptr);
    printf("القيمة عبر المؤشر: %d\n", *ptr);

    return (0);
}
