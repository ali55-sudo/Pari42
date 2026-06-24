#include <stdio.h>

int count_words(char *str)
{
    int count;
    int in_word;
    int i;

    count = 0;
    in_word = 0;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            in_word = 0;
        else if (in_word == 0)
        {
            count++;
            in_word = 1;
        }
        i++;
    }

    return (count);
}

int main(void)
{
    char sentence[100] = "Hello World from 42 Paris";

    printf("النص: %s\n", sentence);
    printf("عدد الكلمات: %d\n", count_words(sentence));

    return (0);
}
