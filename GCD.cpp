#include <algorithm>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    cout << a << endl;
    return 0;
}
