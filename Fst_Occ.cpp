#include <iostream>
#include <algorithm>
using namespace std;
int fstocc(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    if (arr[i] == key)
        return i;
    return fstocc(arr, n, i + 1, key);
}
int main(int argc, char const *argv[])
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};

    int key;
    cout << "Enter key to search:" << endl;
    cin >> key;
    cout << fstocc(arr, 7, 0, key) << endl;

    return 0;
}
