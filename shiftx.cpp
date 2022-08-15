#include <algorithm>
#include <iostream>
using namespace std;
string shiftx(string s)
{
    if (s.size() == 0)
        return "";
    char ans = s[0];
    string an = shiftx(s.substr(1));
    if (ans == 'x')
        return an + ans;
    return ans + an;
}
int main(int argc, char const *argv[])
{
    cout << shiftx("aaxxnnsjismxhsunx") << endl;
    return 0;
}
