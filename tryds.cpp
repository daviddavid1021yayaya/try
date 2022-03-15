#include <iostream>
using namespace std;

int foo(int x, int n)
{
    int f;
    if (n % 2 == 0)
        f = 1;
    else
        f = x;

    if (n < 2)
        return f;
    else
        return f * foo(x * x, n / 2);
}

int main()
{
    int num, pow, ans;
    cout << "please enter your number :" << endl;
    cin >> num >> pow;
    cout << foo(num, pow) << endl;

    return 0;
}
