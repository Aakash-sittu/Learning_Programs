#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (arr[j] == j)
                {
                    arr[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        cout << arr[n] << " ";
        n = n / arr[n];
    }
    cout << endl;
    return 0;
}
