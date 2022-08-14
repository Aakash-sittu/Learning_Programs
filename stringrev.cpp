#include <iostream>
#include <algorithm>
using namespace std;
void reverse(string s)
{
    if (s.size() == 0)
        return;
    string r = s.substr(1);
    reverse(r);
    cout << s[0];
}
int main(int argc, char const *argv[])
{
    reverse("Binod");
    cout << endl;
    return 0;
}
