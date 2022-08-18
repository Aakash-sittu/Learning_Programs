#include <iostream>
#include <algorithm>
using namespace std;
int ways(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return ways(n - 1) + ways(n - 2);
}
int main(int argc, char const *argv[])
{
    cout << ways(4) << endl;
    return 0;
}
