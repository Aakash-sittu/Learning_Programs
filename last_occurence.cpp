#include <iostream>
#include <algorithm>
using namespace std;
int lastocc(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    int larr = lastocc(arr, n, i + 1, key);
    if (larr != -1)
    {
        return larr;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    int key;
    cout << "Enter the key:";
    cin >> key;
    cout << lastocc(arr, 7, 0, key) << endl;
    return 0;
}
