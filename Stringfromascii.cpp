#include <algorithm>
#include <iostream>
using namespace std;
void sub(string s, string ans)
{
    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int comd = ch;
    string ros = s.substr(1);
    sub(ros, ans);
    sub(ros, ans + ch);
    sub(ros, to_string(comd));
}
int main(int argc, char const *argv[])
{
    sub("AB", "");
    cout << endl;
    return 0;
}
