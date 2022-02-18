#include <iostream>
#include <string>
using namespace std;

int rasengan(int b)
{
    cin >> b;
    cout << "i can use rasengan " << b;
    return b;
}

int main()
{
    int i;
    while (i < 3)
    {
        rasengan(i);
        i++;
    }

    return 0;
}
