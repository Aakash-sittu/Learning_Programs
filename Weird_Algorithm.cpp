#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter integer n: ";
    cin>>n;
    cout<<n<<"\t";
    while(n!=1){
        
        if(n%2==0)
        n=n/2;
        else
        n=(n*3)+1;
        cout<<n<<"\t";
    
    }
    return 0;
}
