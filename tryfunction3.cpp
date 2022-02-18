#include <iostream>
#include <string>
using namespace std;

int power(int num, int pownum)
{
    int result = 1;
    for (int i = 0; i < pownum; i++)
    {
        result *= num;
    }
    return result;
}

int main()
{
    int mum = 0;
    int ppp = 0;
    cout << "please enter num and pow :";
    cin >> mum >> ppp;
    cout << power(mum, ppp) << endl;
    return 0;
}