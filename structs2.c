#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

int main(void)
{
    struct Person people[3];
    int i;

    strcpy(people[0].name, "Ali");
    people[0].age = 25;

    strcpy(people[1].name, "Sara");
    people[1].age = 22;

    strcpy(people[2].name, "Omar");
    people[2].age = 30;

    i = 0;
    while (i < 3)
    {
        printf("%s - %d سنة\n", people[i].name, people[i].age);
        i++;
    }

    return (0);
}
