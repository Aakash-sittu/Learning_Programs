#include <iostream>
using namespace std;
int friends(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return n;
    return friends(n - 1) + friends(n - 2) * (n - 1);
}
int main(int argc, char const *argv[])
{
    cout << friends(4) << endl;
    return 0;
}
