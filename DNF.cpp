#include <algorithm>
#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void dnf(int arr[], int n)
{
    int l = 0;
    int m = 0;
    int h = n - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr, l, m);
            l++, m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr, m, h);
            h--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 0, 2, 1, 0, 1, 2, 1, 2};
    dnf(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
