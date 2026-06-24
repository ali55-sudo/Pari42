#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

int main(void)
{
    struct Person person1;

    strcpy(person1.name, "Ali");
    person1.age = 25;

    printf("الاسم: %s\n", person1.name);
    printf("العمر: %d\n", person1.age);

    return (0);
}
