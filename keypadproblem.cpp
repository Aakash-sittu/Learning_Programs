#include <algorithm>
#include <iostream>
using namespace std;
string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keyp(string s, string ans)
{
    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = keypad[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        keyp(ros, ans + code[i]);
    }
}
int main(int argc, char const *argv[])
{
    keyp("23", "");
    cout << endl;
    return 0;
}
