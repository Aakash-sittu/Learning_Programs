#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "You will be given 5 Chances for the guess!" << endl;
    int i = 1;
    while (i < 6)
    {
        int random = 1 + (rand() % 10);
        int t;
        cout << "Enter the number guessed: ";
        cin >> t;
        if (t == random)
        {
            cout << "Voila! You guessed it right!" << endl;
            break;
        }
        else if (i == 5 && t != random)
            cout << "Game Over!" << endl;
        else
        {
            cout << "Try again!" << endl;
        }
        i++;
    }
    cout << endl;
    return 0;
}
