#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << endl;
    return 0;
}
