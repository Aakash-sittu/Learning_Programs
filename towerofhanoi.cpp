#include <iostream>
#include <algorithm>
using namespace std;
void towerofhanoi(int n, char src, char des, char help)
{
    if (n == 0)
        return;
    towerofhanoi(n - 1, src, help, des);
    cout << "Move from " << src << " to " << des << endl;
    towerofhanoi(n - 1, help, des, src);
}
int main(int argc, char const *argv[])
{
    towerofhanoi(3, 'A', 'B', 'C');
    return 0;
}
