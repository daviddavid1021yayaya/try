#include <stdio.h>

// Call by reference
void swap_r(int *x, int *y)
{
    int temp;
    temp = *x; //= *(&a) = a = 10;
    *x = *y;   //= *(&a) = a = *(&b) = b = 20
    *y = temp; //= *(&b) = b = 10
    printf("swap function:\na = %d \nb = %d\n", *x, *y);
}

// Call by value
void swap_v(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("swap function:\na = %d \nb = %d\n", x, y);
}

int main()
{
    int a = 10, b = 20;
    swap_r(&a, &b);
    swap_v(a, b);
    printf("main:\na = %d \nb = %d\n", a, b);
    return 0;
}