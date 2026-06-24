#include <stdio.h>
#include <string.h>

int main(void)
{
    char word1[20] = "hello";
    char word2[20] = "hello";
    char word3[20] = "world";

    if (strcmp(word1, word2) == 0)
        printf("word1 و word2 متساويان\n");
    else
        printf("word1 و word2 مختلفان\n");

    if (strcmp(word1, word3) == 0)
        printf("word1 و word3 متساويان\n");
    else
        printf("word1 و word3 مختلفان\n");

    return (0);
}
