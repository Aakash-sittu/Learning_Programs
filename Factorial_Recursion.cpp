#include <iostream>
#include <algorithm>
using namespace std;
int fib(int n)
{
    if (n == 0)
        return 1;
    return n * fib(n - 1);
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
