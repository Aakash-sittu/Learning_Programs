#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[100] = {0};
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
