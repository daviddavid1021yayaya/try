#include <stdio.h>

struct data
{
    int age;
    char name[20];
    float gpa;
};

int main()
{
    struct data student;
    printf("please enter your age :");
    scanf("%d", &student.age);
    printf("please enter your name :");
    scanf("%s", student.name);
    printf("please enter your gpa :");
    scanf("%f", &student.gpa);
    printf("your age is :%d\n", student.age);
    printf("your name is :%s\n", student.name);
    printf("your gpa is :%2f\n", student.gpa);

    return 0;
}