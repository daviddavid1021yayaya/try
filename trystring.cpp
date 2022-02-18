#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word = "david chen";
    cout << word.size() << endl;          //算文字長度
    cout << word.find("chen", 0) << endl; // 找chen從０開始第幾位
    cout << word.substr(7, 3);            //擷取功能 從第７位（h）算三位

    return 0;
}