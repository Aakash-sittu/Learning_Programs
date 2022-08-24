// 2 sum problem from leetcode
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n], target;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Target ";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {

                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}
