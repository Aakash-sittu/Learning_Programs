#include <iostream>
using namespace std;
enum colors
{
    red = 5,
    black
};
enum suit
{
    heart,
    diamond = 8,
    spade = 3,
    club
};
int main()
{
    cout << "The value of enum color : " << red << "," << black;
    cout << "\nThe default value of enum suit : " << heart << "," << diamond << "," << spade << "," << club;
    cout << endl;
    return 0;
}