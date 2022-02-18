#include <iostream>
using namespace std;

class Movie
{
private:
    string rating;          //什麼情況東西放private public
                            //放在private的東西怎麼調整
public:                     //放在public的東西 if想調整
    string title;           //透過movie.rating = 新值即可
    string director;        //但private 要引用函數？？ 

    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setrating(aRating);    //為什麼要下這行
    }                          // why要使用function才能將值改變 
                               // 下  rating = aRating 會error
    void setrating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "R")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }

    string getRating()
    {
        return rating;
    }
};

int main()
{

    Movie avenagers("the avenagers", "joss whedon", "PG");
    avenagers.setrating("dog");

    cout << avenagers.getRating();
}



//看了hackmd 寫法好像是變數都塞private