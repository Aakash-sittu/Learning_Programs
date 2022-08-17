#include <iostream>
#include <algorithm>
using namespace std;
int maze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
        return 1;
    if (i >= n || j >= n)
        return 0;
    return maze(n, i + 1, j) + maze(n, i, j + 1);
}
int main(int argc, char const *argv[])
{
    cout << maze(3, 0, 0) << endl;
    return 0;
}
