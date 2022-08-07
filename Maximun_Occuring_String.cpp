#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "sample string";
    int max = 0;
    char result;

    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < 26; i++)
    {
        arr[s[i] - 'a']++;
        if (max < arr[i])
        {
            max = arr[i];
            result = (char)(i + 'a');
        }
    }
    cout << result << " " << max << endl;

    return 0;
}
