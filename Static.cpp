// static integer code
#include <iostream>

using namespace std;
int fun()
{

    static int s = 5;
    int m = 5;
    cout << s;
    cout << " ";
    cout << m << endl;
    s++;
    m++;
    return 0;
}
int main()
{
    int i = 5;
    while (i < 10)
    {
        fun();
        i++;
    }

    return 0;
}