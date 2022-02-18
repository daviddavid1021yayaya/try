#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0;
    char op;
    int ans = 0;
    cout << "please enter your number :";
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '+':
        ans = num1 + num2;
        cout << "ans is " << ans << endl;
        break;
    case '-':
        ans = num1 - num2;
        cout << "ans is " << ans << endl;
        break;
    case '*':
        ans = num1 * num2;
        cout << "ans is " << ans << endl;
        break;
    case '/':
        ans = num1 / num2;
        cout << "ans is " << ans << endl;
        break;
    default:
        cout << "error " << endl;
        break;
    }

    return 0;
}