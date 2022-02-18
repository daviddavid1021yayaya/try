#include <iostream>
#include <string>
using namespace std;
class movie
{
public:
    string name;
    string author;
    int rating;

    movie(string aname, string aauthor, int arating) //這裏movie名字要跟上面一樣
    {
        name = aname;
        author = aauthor;
        rating = arating;
    }

    bool hashonor()
    {
        if (rating > 300)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}; // class要分號

class book
{
public:
    string name;
    string dddd;
    int oooo;
};

int main()
{
    /*
    movie average;
    average.name = "good";
    average.author = "david";
    average.rating = 500;
    */

    // movie avenager = {"band", "davidsss", 700}; 這個寫法錯的
    movie avenager("goood", "davidd", 600);

    book python;
    python.name = "alan";

    cout << avenager.hashonor() << endl;
    cout << "python name =" << python.name << endl;

    return 0;
}
