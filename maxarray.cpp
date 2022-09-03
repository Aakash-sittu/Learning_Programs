#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxel = 0;
    for (int i = 0; i < n; i++)
    {
        maxel = max(maxel, arr[i]);
    }
    cout << maxel << endl;

    return 0;
}
