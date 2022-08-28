#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {3, 6, 10, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (key > arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
