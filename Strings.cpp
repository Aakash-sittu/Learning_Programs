#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    //  I/O basic string operations
    /*string str;
    getline(cin, str);
    cout << str << endl;*/
    // append
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout << str1 + str2 << endl; // s1+s2
    str1.clear();                // clear
    if (str1.empty())            //! before condition will make it negate.
        cout << "Str1 is empty" << endl;
    cout << str1.append(str2) << endl;
    cout << str2.compare(str1) << endl;
    string s1 = "loremipsum";
    s1.erase(2, 2);
    cout << s1 << endl;
    cout << s1.find("sum") << endl;
    cout << s1.insert(2, "re") << endl;
    cout << s1.size() << endl;
    cout << s1.length() << endl;
    cout << s1.substr(7, 3) << endl;
    sort(s1.begin(), s1.end());
    cout << s1 << endl;
    return 0;
}
