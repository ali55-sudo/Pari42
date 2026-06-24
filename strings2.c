#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[20] = "Ali";
    char second[20] = "Mejri";
    char full_name[50];

    strcpy(full_name, first);
    strcat(full_name, " ");
    strcat(full_name, second);

    printf("الاسم الكامل: %s\n", full_name);

    return (0);
}
