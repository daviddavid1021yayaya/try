#include <iostream>
#include <string>
using namespace std;

int cube(int num) // 名字隨便取 int num 的地方 看你想輸入什麼
{
    int result = num * num * num;
    return result; // return 這邊要最後打 打了return 會break
}

int main()
{
    int num = 0;
    cin >> num;
    int answer = cube(num);
    cout << "answer = " << answer;
    return 0;
}