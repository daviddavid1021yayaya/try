#include <stdio.h>
int main()
{
    int age = 30;
    int *page = &age;

    printf("page address :%p\n", page);
    printf("page value = %d\n", *page);
    printf("age address : %p\n", &age);
    printf("age value : %d\n", *&age);

    return 0;
}