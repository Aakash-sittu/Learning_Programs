#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {87, 34, 56, 234, 122, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
