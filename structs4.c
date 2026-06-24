#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

void print_person(struct Person p)
{
    printf("الاسم: %s | العمر: %d\n", p.name, p.age);
}

void birthday(struct Person *p)
{
    p->age = p->age + 1;
}

int main(void)
{
    struct Person person;

    strcpy(person.name, "Ali");
    person.age = 25;

    printf("قبل عيد الميلاد:\n");
    print_person(person);

    birthday(&person);

    printf("بعد عيد الميلاد:\n");
    print_person(person);

    return (0);
}
