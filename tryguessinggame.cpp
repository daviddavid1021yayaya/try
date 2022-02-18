#include <iostream>
#include <string>
using namespace std;
int main()
{
    int secretnum = 100, guess = 0;
    int time = 0, guesslimit = 3;
    int outofguess = 0;

    while (secretnum != guess && outofguess == 0)
    {
        if (time < guesslimit)
        {
            cout << "please enter your number :";
            cin >> guess;
            time++;
        }
        else
        {
            outofguess = outofguess + 1;
        }
    }

    if (outofguess == 1)
    {
        cout << "you lose !" << endl;
    }
    else
    {
        cout << "you win !" << endl;
    }

    return 0;
}