// we are solving rat in a maze problem
#include <iostream>
#include <algorithm>
using namespace std;
bool safe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool maze(int **arr, int x, int y, int n, int **sarr)
{
    if (x == n - 1 && y == n - 1)
    {
        sarr[x][y] = 1;
        return true;
    }
    if (safe(arr, x, y, n))
    {
        sarr[x][y] = 1;
        if (maze(arr, x + 1, y, n, sarr))
            return true;
        if (maze(arr, x, y + 1, n, sarr))
            return true;
        return false;
        sarr[x][y] = 0;
        return false;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **sarr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        sarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            sarr[i][j] = 0;
        }
    }
    cout << endl;
    if (maze(arr, 0, 0, n, sarr))
    {
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                cout << sarr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
