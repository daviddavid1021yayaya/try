#include <iostream>
using namespace std;

int returnVal(char x)
{
    return (int)x - 87;
}

int main()
{
    int sum = 0;
    int letter[26] = {
        10,
        11,
        12,
        13,
        14,
        15,
        16,
        17,
    };

    char x = 'A';
    cout << returnVal(x);

    string ID = "A123456789";

    int letter_index = returnVal(ID[0]) - 41;
    sum += letter[letter_index];
    return 0;
}