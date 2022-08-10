// Sum using recursion
#include <algorithm>
#include <iostream>
using namespace std;
int recurivefn(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + recurivefn(n - 1);
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << recurivefn(n) << endl;
    return 0;
}
