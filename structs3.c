#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

int main(void)
{
    struct Person person;
    struct Person *ptr;

    ptr = &person;

    strcpy(person.name, "Ali");
    person.age = 25;

    printf("بالطريقة العادية: %s\n", person.name);
    printf("عبر المؤشر (*ptr).name: %s\n", (*ptr).name);
    printf("عبر السهم ptr->name: %s\n", ptr->name);

    return (0);
}
