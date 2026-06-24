#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50] = "Hello";
    int len;
    int i;

    len = strlen(str);

    printf("النص الأصلي: %s\n", str);
    printf("النص المعكوس: ");

    i = len - 1;
    while (i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
    printf("\n");

    return (0);
}
