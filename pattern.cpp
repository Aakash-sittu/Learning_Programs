#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //this is full star rectangle maker
    int row,col;
    cout<<"Enter Number of Rows: ";
    cin>>row;
    cout<<"Enter Number of Coloumns: ";
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++){
        cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}
