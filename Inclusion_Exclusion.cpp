#include <algorithm>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    int c1 = a / b, c2 = a / c, c3 = a / (b * c);
    cout << c1 + c2 - c3 << endl;
    return 0;
}
