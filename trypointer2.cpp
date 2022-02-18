#include <iostream>
#include <string>
using namespace std;

void swap_v(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5, b = 7;
    swap_v(a, b);
    cout << "a = " << a << endl
         << "b = " << b << endl;

    return 0;
}