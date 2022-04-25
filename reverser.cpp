#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter Number to Reverse: ";
    cin>>n;
    int reverse=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}
