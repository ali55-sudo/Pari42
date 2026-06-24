#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20] = "Ali";

    printf("الاسم: %s\n", name);
    printf("طول الاسم: %lu\n", strlen(name));

    return (0);
}
