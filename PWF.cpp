// set precision fill width
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 3.14159;
    // cout<<"Precision set to 2 "<<fixed<<setprecision(2)<<pi<<endl;
    cout.precision(3);
    cout << "Precison set to 2 " << pi << endl;
    cout.width(5);
    cout << "width set to 5| " << pi << endl;
    cout << "Width 10 with Z| ";
    cout.fill('Z');
    cout.width(10);
    cout << pi << endl;
    cout << endl;
    cout << endl;
    cout << "Precision set to 2 " << fixed << setprecision(2) << pi << endl;
    cout << "Width set to 7 " << fixed << setw(7) << pi << endl;
    cout << "Filled with Z " << fixed << setfill('Z') << pi << endl;
    return 0;
}