#include <stdio.h>

int main(void)
{
    int arr[3] = {100, 200, 300};
    int *ptr;

    ptr = arr;

    printf("arr[0] = %d\n", arr[0]);
    printf("*ptr = %d\n", *ptr);

    printf("arr[1] = %d\n", arr[1]);
    printf("*(ptr + 1) = %d\n", *(ptr + 1));

    printf("arr[2] = %d\n", arr[2]);
    printf("*(ptr + 2) = %d\n", *(ptr + 2));

    return (0);
}
