#include <iostream>
#include <algorithm>
using namespace std;
string rmvdup(string s)
{
    if (s.size() == 0)
        return "";
    char str = s[0];
    string st = rmvdup(s.substr(1));
    if (str == st[0])
        return st;
    return (str + st);
}
int main(int argc, char const *argv[])
{

    cout << rmvdup("aaaabbbbbcccddeeeeef") << endl;
    return 0;
}
